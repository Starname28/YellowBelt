// DirectorCode2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <deque>

using namespace std;

enum Prioritet { FIRST = 1, SECOND };


string retOperation(char op, Prioritet& pr)
{
    switch (op)
    {
    case '+':
        pr = SECOND;
        return " + ";
        break;
    case '-':
        pr = SECOND;
        return " - ";
        break;
    case '*':
        pr = FIRST;
        return " * ";
        break;
    case '/':
        pr = FIRST;
        return " / ";
        break;
    }
}

int main()
{
    int firstNumber, countSymbol;
    char symb, lastSymb;

    cin >> firstNumber >> countSymbol;

    if (countSymbol == 0)
    {
        cout << to_string(firstNumber) << endl;
        return 0;
    }

    size_t SIZE = countSymbol * 6 + 1;

    deque<string> expression(SIZE);
    Prioritet present, past;
    bool fisrtStep = true;

    expression.push_back(to_string(firstNumber));

    for (size_t i = 0; i < countSymbol; i++)
    {
        cin >> symb;
        string temp = retOperation(symb, present);

        if (!fisrtStep)
        {
            if (present < past)
            {
                expression.push_front("(");
                expression.push_back(")");
            }
        }

        fisrtStep = false;
        expression.push_back(temp);
        past = present;
        cin >> firstNumber;
        expression.push_back(to_string(firstNumber));
    }

    for (const auto& ch : expression)
    {
        cout << ch;
    }

    // retString(firstNumber, reString);

     //1 7 + 1 - 2 + 3 * 4 / 5 * 6 * 7
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
