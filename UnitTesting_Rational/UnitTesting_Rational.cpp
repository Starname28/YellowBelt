// UnitTesting_Rational.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

using namespace std;

template <class T>
ostream& operator << (ostream& os, const vector<T>& s) {
    os << "{";
    bool first = true;
    for (const auto& x : s) {
        if (!first) {
            os << ", ";
        }
        first = false;
        os << x;
    }
    return os << "}";
}

template <class T>
ostream& operator << (ostream& os, const set<T>& s) {
    os << "{";
    bool first = true;
    for (const auto& x : s) {
        if (!first) {
            os << ", ";
        }
        first = false;
        os << x;
    }
    return os << "}";
}

template <class K, class V>
ostream& operator << (ostream& os, const map<K, V>& m) {
    os << "{";
    bool first = true;
    for (const auto& kv : m) {
        if (!first) {
            os << ", ";
        }
        first = false;
        os << kv.first << ": " << kv.second;
    }
    return os << "}";
}

template<class T, class U>
void AssertEqual(const T& t, const U& u, const string& hint = {}) {
    if (t != u) {
        ostringstream os;
        os << "Assertion failed: " << t << " != " << u;
        if (!hint.empty()) {
            os << " hint: " << hint;
        }
        throw runtime_error(os.str());
    }
}

void Assert(bool b, const string& hint) {
    AssertEqual(b, true, hint);
}

class TestRunner {
public:
    template <class TestFunc>
    void RunTest(TestFunc func, const string& test_name) {
        try {
            func();
            cerr << test_name << " OK" << endl;
        }
        catch (exception& e) {
            ++fail_count;
            cerr << test_name << " fail: " << e.what() << endl;
        }
        catch (...) {
            ++fail_count;
            cerr << "Unknown exception caught" << endl;
        }
    }

    ~TestRunner() {
        if (fail_count > 0) {
            cerr << fail_count << " unit tests failed. Terminate" << endl;
            exit(1);
        }
    }

private:
    int fail_count = 0;
};

//int GreatestCommonDivisor(int a, int b) {
//    if (b == 0) {
//        return a;
//    }
//    else {
//        return GreatestCommonDivisor(b, a % b);
//    }
//}
//
//
//class Rational {
//public:
//    Rational() {  // дробь по умолчанию Ч 0/1
//        numerator = 0;
//        denominator = 1;
//    }
//    Rational(int new_numerator, int new_denominator) {
//        const int gcd = GreatestCommonDivisor(new_numerator, new_denominator);
//        // сократим дробь, разделив числитель и знаменатель на их Ќќƒ
//        numerator = new_numerator / gcd;
//        denominator = new_denominator / gcd;
//        // знаменатель должен быть положительным
//        if (denominator < 0) {
//            denominator = -denominator;
//            numerator = -numerator;
//        }
//    }
//
//    int Numerator() const {
//        return numerator;
//    }
//
//    int Denominator() const {
//        return denominator;
//    }
//
//private:
//    int numerator;
//    int denominator;
//};

void TestDefault()
{
    Rational rational;
    AssertEqual(rational.Numerator(), 0, "Numerator == 0");
    AssertEqual(rational.Denominator(), 1, "Denominator == 1");
}

void TestParamer()
{
    {
        Rational rational{ 1, -1 };
        AssertEqual(rational.Numerator(), -1, "Numerator == -1");
        AssertEqual(rational.Denominator(), 1, "Denominator == 1");
    }
    {
        Rational rational{ 1, 1 };
        AssertEqual(rational.Numerator(), 1, "Numerator == -1");
        AssertEqual(rational.Denominator(), 1, "Denominator == 1");
    }
    {
        Rational rational{ -1, 1 };
        AssertEqual(rational.Numerator(), -1, "Numerator == -1");
        AssertEqual(rational.Denominator(), 1, "Denominator == 1");
    }
    {
        Rational rational{ -1, -1 };
        AssertEqual(rational.Numerator(), 1, "Numerator == 1");
        AssertEqual(rational.Denominator(), 1, "Denominator == 1");
    }
    {
        Rational rational{ 0, -1 };
        AssertEqual(rational.Numerator(), 0, "Numerator == 0");
        AssertEqual(rational.Denominator(), 1, "Denominator == 1");
    }
}
void TestFractionReduction()
{
    {
        Rational rational{ 4, 6 };
        AssertEqual(rational.Numerator(), 2, "Numerator == 2");
        AssertEqual(rational.Denominator(), 3, "Denominator == 3");
    }
    {
        Rational rational{ 4, -6 };
        AssertEqual(rational.Numerator(), -2, "Numerator == 2");
        AssertEqual(rational.Denominator(), 3, "Denominator == 3");
    }
    {
        Rational rational{ -4, 6 };
        AssertEqual(rational.Numerator(), -2, "Numerator == 2");
        AssertEqual(rational.Denominator(), 3, "Denominator == 3");
    }
}

void AllTest()
{
    TestRunner runner;
    runner.RunTest(TestFractionReduction, "TestFractionReduction");
    runner.RunTest(TestDefault, "TestDefault");
    runner.RunTest(TestParamer, "TestParamer");

}

int main()
{
    AllTest();

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
