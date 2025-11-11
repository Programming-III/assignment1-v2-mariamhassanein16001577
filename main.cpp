#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
using namespace std;

class thisPerson{
    public:
    string name;
    int id=0;
};
class thisStudent{
    public:
    int yearLevel = 0;
    string major;
};
class thisInstructor {
    public:
    string department;
    int experienceYears = 0;
};
class thisCourse {
    public:
        string courseCode;
        string courseName;
        int maxStudents=0;
        Student *students = nullptr;
        int currentStudents=0;
};
int main() {
    Student x;
    Person p;
    Instructor i;
    Course c;
    displayCourseInfo().c.courseCode;
    displayCourseInfo().c.courseName;
    displayCourseInfo().c.maxStudents;
    display().i.department;
    display().i.experienceYears;
    display().p.name;
    display().p.id;
    display().x.major;
    display().x.yearLevel;

    return 0;
}
