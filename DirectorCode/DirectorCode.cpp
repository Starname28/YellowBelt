// DirectorCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <deque>

using namespace std;

string retOperation(char op)
{
    switch (op)
    {
    case '+':
        return " + ";
        break;
    case '-':
        return " - ";
        break;
    case '*':
        return " * ";
        break;
    case '/':
        return " / ";
        break;
    }
}

int main()
{
    int firstNumber, countSymbol;
    char symb;

    cin >> firstNumber >> countSymbol;

    if (countSymbol == 0)
    {
        cout << to_string(firstNumber) << endl;
        return 0;
    }

    size_t SIZE = countSymbol * 6 + 1;

    deque<string> expression(SIZE);
    expression.push_back(to_string(firstNumber));

    for (size_t i = 0; i < countSymbol; i++)
    {
        expression.push_front("(");
        expression.push_back(")");

        cin >> symb;
        expression.push_back(retOperation(symb));
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
