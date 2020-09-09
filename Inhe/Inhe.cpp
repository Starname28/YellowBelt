#include <iostream>
#include <memory>
#include <stack>
#include <vector>
#include <string>
#include <cstdint>

using namespace std;

// Внимание!
// Для простоты разбора будем использовать только числа из одной цифры,
// а также не будет скобок, пробелов и ненужных символов.
// При этом, будем считать, что выражение всегда корректно.

struct Node {
    virtual int Evaluate() const = 0;
};

struct Value : public Node {
    Value(char digit) : _value(digit - '0') {}

    int Evaluate() const override { return _value; }

private:
    const uint8_t _value;
};

struct Variable : public Node {
    Variable(const int& x) : _x(x) {}

    int Evaluate() const override { return _x; }

private:
    const int& _x;
};

struct Op : public Node {
    Op(char value)
        : precedence([value] {
        if (value == '*') {
            return 2;
        }
        else {
            return 1;
        }
            }()),
        _op(value) {}

            const uint8_t precedence;

            int Evaluate() const override {
                if (_op == '*') {
                    return _left->Evaluate() * _right->Evaluate();
                }
                else if (_op == '+') {
                    return _left->Evaluate() + _right->Evaluate();
                }
                else if (_op == '-') {
                    return _left->Evaluate() - _right->Evaluate();
                }

                return 0;
            }

            void SetLeft(shared_ptr<Node> node) { _left = node; }
            void SetRight(shared_ptr<Node> node) { _right = node; }

private:
    const char _op;
    shared_ptr<const Node> _left, _right;
};

template <class Iterator>
shared_ptr<Node> Parse(Iterator token, Iterator end, const int& x) {
    // Empty expression
    if (token == end) {
        return make_shared<Value>('0');
    }

    stack<shared_ptr<Node>> values;
    stack<shared_ptr<Op>> ops;

    auto PopOps = [&](int precedence) {
        while (!ops.empty() && ops.top()->precedence >= precedence) {
            auto value1 = values.top();
            values.pop();
            auto value2 = values.top();
            values.pop();
            auto op = ops.top();
            ops.pop();

            op->SetRight(value1);
            op->SetLeft(value2);

            values.push(op);
        }
    };

    while (token != end) {
        const auto& value = *token;
        if (value >= '0' && value <= '9') {
            values.push(make_shared<Value>(value));
        }
        else if (value == 'x') {
            values.push(make_shared<Variable>(x));
        }
        else if (value == '*') {
            PopOps(2);
            ops.push(make_shared<Op>(value));
        }
        else if (value == '+' || value == '-') {
            PopOps(1);
            ops.push(make_shared<Op>(value));
        }

        ++token;
    }

    while (!ops.empty()) {
        PopOps(0);
    }

    return values.top();
}

int main() {
    string tokens;
    cout << "Enter expression: ";
    getline(cin, tokens);

    int x = 0;
    auto node = Parse(tokens.begin(), tokens.end(), x);

    cout << "Enter x: ";
    while (cin >> x) {
        cout << "Expression value: " << node->Evaluate() << endl;
        cout << "Enter x: ";
    }

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
