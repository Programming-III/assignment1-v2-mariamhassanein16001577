#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person {
private:
    string name;
    int id=0;

    static void display(const string& name, const int id) {
        cout << name << endl;
        cout << id << endl;
    }
    ~ Person() {}
};










#endif
