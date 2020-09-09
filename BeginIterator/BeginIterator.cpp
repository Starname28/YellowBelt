// BeginIterator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

using namespace std;

ostream& operator<<(ostream& os, pair<string, int> Pair)
{
    os << Pair.first << ' ' << Pair.second << ';';

    return os;
}

template <typename It>
void printIterator(It beginIt, It endIt)
{
    for (auto it = beginIt; it != endIt; ++it)
    {
        cout << *it << endl;
    }
}

int main()
{
    vector<string> String = { "C", "C++", "Python" };
    map<string, int> Map = { {"C", 42}, {"C++",24}, {"Python",37} };

    decltype(String)::iterator it = find_if(begin(String), end(String), [](const string& str) {
        return str[0] == 'C'; });

    printIterator(String.begin(), String.end());
    printIterator(String[2].begin(), String[2].end());

    printIterator(Map.begin(), Map.end());

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
