#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;

class Course {
private:
    string courseCode;
    string courseName;
    int maxStudents=0;
    Student *students = nullptr;
    int currentStudents=0;
    void addStudent(const Student& s) {
        s =
    }
    static void getMajor(){
        Student.major = getMajor;
    }
    static void getYearLevel() {
        Student.yearLevel =  getYearLevel;
    }
    void displayCourseInfo() const {
        cout << courseCode << endl;
        cout << courseName << endl;
        cout << currentStudents << endl;
        cout << getMajor << endl;
        cout << getYearLevel << endl;
    }
    ~ Course();
};
#endif
