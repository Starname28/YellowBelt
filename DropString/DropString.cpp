// DropString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> SplitIntoWords(const string& s)
{
    vector<string> ret;
    ostringstream os;

    for (auto it = begin(s); it != end(s); ++it)
    {
        if (*it == ' ')
        {
            ret.emplace_back(os.str());
            os.str("");
        }
        else
        {
            os << *it;
        }
    }

    ret.emplace_back(os.str());

    return ret;
}

int main() {
    string s = "C Cpp Java Python";

    vector<string> words = SplitIntoWords(s);
    cout << words.size() << " ";
    for (auto it = begin(words); it != end(words); ++it) {
        if (it != begin(words)) {
            cout << "/";
        }
        cout << *it;
    }
    cout << endl;

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
