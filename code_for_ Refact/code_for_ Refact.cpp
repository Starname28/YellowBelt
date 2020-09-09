#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Human {
 public:
     Human(const string& name, const string& profession)
        : Name(name), Profession(profession)
    {}

    virtual void Walk(const string& destination)
    {
        cout << Profession << ": "  << Name << " walks to: " << destination << endl;
    }

    string Name;
    string Profession;
};


class Student : public Human {
public:

    Student(const string& name, const string& favouriteSong) 
        : Human(name, "Student"), FavouriteSong(favouriteSong)
    {
    }

    void Learn() {
        cout << "Student: " << Name << " learns" << endl;
    }

    void Walk(const string& destination) override{
        Human::Walk(destination);
        cout << Profession << ": " << Name << " sings a song: " << FavouriteSong << endl;
    }

    void SingSong() {
        cout << Profession << ": " << Name << " sings a song: " << FavouriteSong << endl;
    }
public:
    string FavouriteSong;
};


class Teacher : public Human {
public:

    Teacher(const string& name, const string& subject) 
        : Human(name, "Teacher"), Subject(subject)
    {
    }

    void Teach() {
        cout << Profession << ": " << Name << " teaches: " << Subject << endl;
    }

public:
    string Subject;
};


class Policeman  : public Human {
public:
    Policeman(const string& name) 
        : Human(name, "Policeman")
    {
    }

    void Check(Human& human) {
        cout << Profession << ": " << Name << " checks "<<  human.Profession << ". "<< 
            human.Profession << "'s name is: " << human.Name << endl;
    }

};


void VisitPlaces(Human& t, const vector<string>& places) {
    for (auto p : places) {
        t.Walk(p);
    }
}


int main() {
    Teacher t("Jim", "Math");
    Student s("Ann", "We will rock you");
    Policeman p("Bob");

    VisitPlaces(t, { "Moscow", "London" });
    p.Check(s);
    VisitPlaces(s, { "Moscow", "London" });
    return 0;
}