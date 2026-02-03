#include "Student.h"
Student::Student(int id, string n, string e, int a) {
    student_ID = id;
    name = n;
    email = e;
    age = a;
}
int Student::getID() { return student_ID;}
string Student::getName() { return name;}
string Student::getEmail() { return email;}
int Student::getAge() { return age;}
void Student::setName(string n) { name = n;}
void Student::setEmail(string e) { email = e;}
void Student::setAge(int a) { age = a;}