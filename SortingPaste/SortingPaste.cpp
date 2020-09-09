// SortingPaste.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;


template <typename RandomIt>
void MergeSort(RandomIt range_begin, RandomIt range_end) {

    if (range_begin + 1 == range_end)
    {
        return;
    }


    vector<typename RandomIt::value_type> elements(range_begin, range_end);

    auto firstIter  = elements.begin() + (elements.end() - elements.begin()) / 3;
    auto secondIter = elements.begin() + (elements.end() - elements.begin()) / 3 * 2;


    if (elements.begin() + 1 == elements.end())
    {
        if (*(elements.begin() + 1) < *(elements.begin()))
        {
            swap(*(elements.begin()), *(elements.begin() + 1));
        }
        return;
    }



    /*  vector<typename RandomIt::value_type> first(elements.begin(), border);
      vector<typename RandomIt::value_type> second(border, elements.end());*/

      /* MergeSort(first.begin(), first.end());
       MergeSort(second.begin(), second.end());

       merge(first.begin(), first.end(), second.begin(), second.end(), range_begin);*/

    MergeSort(elements.begin(), firstIter);
    MergeSort(firstIter, secondIter);
    MergeSort(secondIter, elements.end());
    
    vector<typename RandomIt::value_type> vec;
    
    merge(elements.begin(), firstIter, firstIter, secondIter, back_inserter(vec));

    merge(vec.begin(), vec.end(), secondIter, elements.end(), range_begin);

}
int main() {
    vector<int> v = { 6, 4, 7, 6, 4, 4, 0, 1, 5 };

    MergeSort(begin(v), end(v));
    for (int x : v) {
        cout << x << " ";
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
