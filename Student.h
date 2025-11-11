#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <string>

using namespace std;

class Student {
private:
    int yearLevel=0;
    string major;
    void display() const {
        cout << yearLevel << endl;
        cout << major << endl;
    }
    ~ Student() {}
};
#endif
