// Console.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <typeinfo>
#include <tuple>

template<typename Collection>
std::string join(const Collection& col, char c)
{
    std::stringstream ss;
    bool flag = true;

    for (const auto& p : col)
    {
        if (!flag)
        {
            ss << c;
        }

        flag = false;
        ss << p;
    }
    return ss.str();
}


template<typename Key, typename Value>
std::ostream& operator<<(std::ostream& out, const std::pair<Key, Value>& p)
{
    return out << '(' << p.first << ' ' << p.second << ')';
}

template<typename Type>
std::ostream& operator<<(std::ostream& out, const std::vector<Type>& vec)
{
    return out << '[' << join(vec, ',') << ']';
}

template<typename Key, typename Value>
std::ostream& operator<<(std::ostream& out, const std::map<Key,Value>& map)
{
    return out << '{' << join(map, ',') << '}';;
}

template <typename First, typename Second>
std::pair<First, Second> operator*(const std::pair<First, Second>& first,
    const std::pair<First, Second>& second)
{
    return { first.first * second.first, first.second * second.second };
}

template <typename T>
T getSqr(T arg)
{
    return arg * arg;
}

int main()
{
    std::map<int, int> Map = { {1,2.5},
                               {2,45.7 } };

    std::cout << Map << std::endl;

    auto p = std::make_pair(22, 5);
    auto [key1, key2] = getSqr(p);

    std::cout << key1 << " " << key2 << std::endl;

    std::tuple tup(1, "string", 23);
    auto tup1 = std::make_tuple(1, "wer", 3);
    std::cout << std::get<1>(tup1) << std::endl;

    std::shared_ptr<std::string> helloWorld = std::make_shared<std::string>("Hello World");
    std::cout << *helloWorld << std::endl;
    std::vector < std::string> vec /*= std::vector < std::string>(1)*/;

    vec.emplace_back("First String");
    std::cout << vec;;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
