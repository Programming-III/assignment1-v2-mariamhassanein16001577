#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "Person.h"

using namespace std;
class Instructor {
private:
    string department;
    int experienceYears = 0;
    public:
    void display() const {
        cout << department << endl;
        cout << experienceYears << endl;
    }
    ~ Instructor() {}
};
#endif
