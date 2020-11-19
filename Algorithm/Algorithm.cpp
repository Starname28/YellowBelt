// Algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <iterator>
//Inna

using namespace std;

int main()
{
    try
    {
        vector<string> vec = { "C++", "C*", "Python" };
        vector<int> vec1 = { 1, 22,33,44,5,6,7,8,99,10 };
        vec1.assign(vec1.begin(), vec1.end());
       // auto t = is_sorted_until(vec1.rbegin(), vec1.rend());
       // cout << *t << endl;
        for (auto g : vec1)
        {
            cout << g << " ";
        }
        cout << endl;
        cout << "-------------------" << endl;
        auto it = minmax_element(vec.rbegin(), vec.rend());
        auto it1 = find_if(vec.begin(), vec.end(), [](const string& s) {
            return s[0] == ' ';
            });
    
        if(it1 !=vec.end())
            cout << *it1 << endl;

        cout << *it.first << *it.second << endl;

        sort(vec.rbegin(), vec.rend());

        for (auto i = vec.begin(); i != vec.end(); ++i)
        {
            cout << *i << endl;
        }

        reverse(vec.rbegin(), vec.rend());

        for (auto i = vec.begin(); i != vec.end(); ++i)
        {
            cout << *i << endl;
        }
        cout << "---------------------" << endl;

        auto p = partition(vec.begin(), vec.end(), [](const string& s) {
            return s[0] == 'P';
            });

        for (auto i = vec.begin(); i != p; ++i)
        {
            cout << *i << endl;
        }

        {
            cout << "---------------------" << endl;

            vector<string> vec1(vec.size());

            auto p = copy_if(vec.begin(), vec.end(), vec1.begin(), [](const string& s) {
                return s[0] == 'P';
                });

           for (auto i = vec1.begin(); i != vec1.end(); ++i)
           {
               cout << *i << ',' << endl;
           }
        }
        {
            cout << "---------------------" << endl;
            set<int> s1 = { 1,3,6,2 };
            set<int> s2 = { 11,2,3,2 };

            vector<int> v(s1.size());

            auto iT = set_intersection(s1.begin(), s1.end(),
                s2.begin(), s2.end(), v.begin());

            for (auto i = v.begin(); i != iT; ++i)
            {
                cout << *i << ',' << endl;
            }
        }
        {
            cout << "---------------------" << endl;

            vector<string> vec1;

            auto p = copy_if(vec.begin(), vec.end(), back_inserter(vec1), [](const string& s) {
                return s[0] == 'C';
                });

            for (auto i = vec1.begin(); i != vec1.end(); ++i)
            {
                cout << *i << ',' << endl;
            }
        }
        {
            cout << "---------------------" << endl;
            set<int> s1 = { 1,3,6,2 };
            set<int> s2 = { 11,2,3,2 };

            set<int> v;

            auto iT = set_intersection(s1.begin(), s1.end(),
                s2.begin(), s2.end(), inserter(v, v.end()));

            for (auto i = v.begin(); i != v.end(); ++i)
            {
                cout << *i << ',' << endl;
            }
        }
    }
    catch (...)
    {
        cout << "Func" << endl;
    }

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
