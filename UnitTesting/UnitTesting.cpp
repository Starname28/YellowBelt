// UnitTesting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cassert>
#include <sstream>
#include <exception>

int Sum(int a, int b)
{
    return a + b + 1;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::set<T> Set)
{
    os << ']';
    bool firstElement = true;

    for (const auto& el : Set)
    {
        if (!firstElement)
            os << ", ";

        firstElement = false;
        os << el;
    }

    return os << ']';
}

template <typename Key, typename Value>
std::ostream& operator<<(std::ostream& os, const std::map<Key, Value>& Map)
{
    os << '{';
    bool firstElement = true;

    for (const auto& el : Map)
    {
        if (!firstElement)
            os << ", ";

        firstElement = false;
        os << el.first << ": " << el.second;
    }

    return os << '}';
}

template <typename T, typename U>
void testEqual(const T& t, const U& u, const std::string& nameTest)
{
    if (t != u)
    {
        std::ostringstream os;
        os << "Assertion failed: " << t << " != " << u << ", test name: " << nameTest;
        throw std::runtime_error(os.str());
    }
}

void Assert(bool test, const std::string& hint)
{
    testEqual(test, true, hint);
}

void testSum()
{
    testEqual(Sum(1, 2), 3, " int");
}

class TestRunner
{
public:
    TestRunner() = default;
    ~TestRunner()
    {
        if (failCount > 0)
        {
            std::cerr << failCount << " failed. Terminate " << std::endl;
            exit(1);
        }
    }

    template <typename TypeFunc>
    void runTest(TypeFunc func, const std::string& testName)
    {
        try
        {
            func();
            std::cerr << testName << " OK" << std::endl;
        }
        catch (std::runtime_error& e)
        {
            ++failCount;
            std::cerr << testName << " failed: " << e.what() << std::endl;
        }
    }

private:
    int failCount = 0;
};

void testAll()
{
    TestRunner tr;
    tr.runTest(testSum, "TestSum");
}
int main()
{
    testAll();
    std::cout << "Hello World!\n";

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
