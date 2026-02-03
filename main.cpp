#include <iostream>
#include <string>
using namespace std;
#include "Student.h"
#include "Course.h"
#include "Enrollment.h"

int main() {
    Student students[5] = {
        Student(0,"Sana","sanaabdullah@gmail.com", 23),
        Student(1,"Sally","sally@email.com", 25),
        Student(2,"Farah","farah@gmail.com",20),
        Student(3,"Ahmed","ahmed@gmail.com",21),
        Student(4,"Aya","aya@gmail.com",19)
    };

    Course courses[2] = {
        Course(0,"Math",30),
        Course(1,"Science",25)
    };
    Enrollment enrollments[5] = {
 Enrollment(0,students[1].getID(), courses[1].getID(), "02-02-2026"),
 Enrollment(1,students[1].getID(), courses[1].getID(), "04-01-2026"),
 Enrollment(2,students[2].getID(), courses[1].getID(), "04-01-2026"),
 Enrollment(3,students[3].getID(), courses[1].getID(), "03-01-2026"),

    };

    cout << "List of students" << endl;
    for (int i = 0; i < 5; i++) {
        cout << students[i].getID() << "\n" << students[i].getName()
            << "\n" << students[i].getEmail()
            << "\n" << students[i].getAge() <<"years old"<< endl;
    }

    cout << "List of courses" << endl;
    for (int i = 1;i < 2; i++) {
        cout << courses[i].getID() << "\n" << courses[i].getTitle()
            << "\n" << courses[i].getDuration() <<"hours" << endl;
    }

    cout << "List of enrollments"<< endl;
    for (int i = 0;i < 2;i++) {
        cout << "Student ID: " << enrollments[i].getStudentID()
            << " | Course ID: " << enrollments[i].getCourseID()
            << " | Date: " << enrollments[i].getDate() << endl;
    }

    return 0;
}