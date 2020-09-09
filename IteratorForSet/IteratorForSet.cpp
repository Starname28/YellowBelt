// IteratorForSet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <string>

using namespace std;

template <typename T>
vector<T> FindGreaterElements(const set<T>& elements, const T& border)
{
    vector<T> returnVec;

    auto it = upper_bound(elements.begin(), elements.end(), border);

    returnVec = { it, elements.end() };

    return returnVec;
}

int main() {
    for (int x : FindGreaterElements(set<int>{1, 5, 7, 8}, 5)) {
        cout << x << " ";
    }
    cout << endl;

    string to_find = "Python";
    cout << FindGreaterElements(set<string>{"C", "C++"}, to_find).size() << endl;
    return 0;
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
