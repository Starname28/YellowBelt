// Unit_Testing_IsPalindorom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>
#include <cctype>

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

bool IsPalindrom(const string& str) 
{
 /*   const size_t& sizeStr = str.size();
    ostringstream ostr, os;

    if (str == "" || sizeStr == 1)
        return true;

    for (size_t i = 0; i < sizeStr - 1; i++)
    {
        ostr << static_cast<char>(tolower(str[i]));

    }
    for (size_t i = sizeStr - 1; i > 0; i--)
    {
        os << static_cast<char>(tolower(str[i]));
    }

    if(os.str() == ostr.str())
        return true;
    return false;*/
    for (int i = 0; i < str.size() / 2; ++i) {
        if (str[i] != str[str.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

void TestPalinromEmpty()
{
    Assert(IsPalindrom(""), "Empty");
}

void TestPalinromSpace()
{
    Assert(IsPalindrom("  "), "Space");
    Assert(IsPalindrom("        "), "Tab");

    Assert(!IsPalindrom(" A"), "Space with A");
    Assert(!IsPalindrom("A "), "Space with A");
    Assert(IsPalindrom(" A "), "Space with A - 2");
    Assert(!IsPalindrom(" A A"), "Space with A - 3");
}

void TestPalinromRegister()
{
    Assert(!IsPalindrom("Aa"), "Aa");
    Assert(!IsPalindrom("aA"), "Aa");
}

void TestPalinrom()
{
    Assert(IsPalindrom("I"), "One symbol");

    Assert(IsPalindrom("ijj jji"), "With Space");
    Assert(!IsPalindrom("Iiii iiIi"), "With Space and high register");

    Assert(!IsPalindrom("adam"), "No Palindrom");
}
void AllTest()
{
    TestRunner runner;
    runner.RunTest(TestPalinrom, "TestPalinrom");
    runner.RunTest(TestPalinromEmpty, "TestPalinromEmpty");
    runner.RunTest(TestPalinromSpace, "TestPalinromSpace");
    runner.RunTest(TestPalinromRegister, "TestPalinromRegister");
}

int main() {
    AllTest();
    // добавьте сюда свои тесты
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
