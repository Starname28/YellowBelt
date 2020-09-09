// SetFigure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <memory>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;
//Triangle, Rect и Circle
//методами Name, Perimeter и Area
class Figure
{
public:
    virtual string Name() = 0;
    virtual double Perimeter() = 0;
    virtual double Area() = 0;
};

class Triangle : public Figure
{
public:
    Triangle(const double& a, const double& b, const double& c)
        :m_perimeter(0), m_area(0), m_a(a), m_b(b), m_c(c)
    {}

    string Name() override
    {
        return m_name;
    }

    double Perimeter() override
    {
        return m_a + m_b + m_c;
    }

    double Area() override
    {
        double per = Perimeter() / 2;

        return sqrt(per * (per - m_a) * (per - m_b) * (per - m_c));
    }

private:
    const string m_name = "TRIANGLE";

    double m_perimeter;
    double m_area;
    double m_a, m_b, m_c;
};

class Rect : public Figure
{
public:
    Rect(const double& a, const double& b)
        : m_perimeter(0), m_area(0), m_a(a), m_b(b)
    {}

    string Name() override
    {
        return m_name;
    }

    double Perimeter() override
    {
        return (m_a + m_b) * 2;
    }

    double Area() override
    {
        return m_a * m_b;
    }

private:
    const string m_name = "RECT";

    double m_perimeter;
    double m_area, m_a, m_b;
};

class Circle : public Figure
{
public:
    Circle(const double& radius)
        : m_perimeter(0), m_area(0), m_radius(radius)
    {}

    string Name() override
    {
        return m_name;
    }

    double Perimeter() override
    {
        return 2 * 3.14 * m_radius;
    }

    double Area() override
    {
        return 3.14 * m_radius * m_radius;
    }

private:
    const string m_name = "CIRCLE";
    double m_perimeter;
    double m_area, m_radius;
};

shared_ptr<Figure> CreateFigure(istringstream& line)
{
  /*  string figure = line.str();

    auto it = find((figure.begin() + 4), figure.end(), ' ');

    string command(figure.begin() + 4, it);*/
    string command;
    line >> command;

    if (command == "RECT")
    {
        double a, b;
        line >> a >> b;

        return make_shared<Rect>(a, b);
    }
    else if (command == "TRIANGLE")
    {
        double a, b, c;
        line >> a >> b >> c;
        return make_shared<Triangle>(a, b, c);//atoi(&*next(it)), atoi(&*next(it + 2)), atoi(&*next(it + 4))
    }
    else if (command == "CIRCLE")
    {
        double radius;
        line >> radius;

        return make_shared<Circle>(radius);
    }

    throw invalid_argument("Invalid");
}

int main() {
    vector<shared_ptr<Figure>> figures;
    for (string line; getline(cin, line); ) {
        istringstream is(line);

        string command;
        is >> command;

        if (command == "ADD") {
            figures.push_back(CreateFigure(is));
        }
        else if (command == "PRINT") {
            for (const auto& current_figure : figures) {
                cout << fixed << setprecision(3)
                    << current_figure->Name() << " "
                    << current_figure->Perimeter() << " "
                    << current_figure->Area() << endl;
            }
        }
    }
    return 0;
}