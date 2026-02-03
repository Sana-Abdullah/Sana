#include "Enrollment.h"
Enrollment::Enrollment(int eID, int sID, int cID, string d) {
    enrollmentID = eID;
    studentID = sID;
    courseID = cID;
    date = d;
}

int Enrollment::getEnrollmentID() { return enrollmentID; }
int Enrollment::getStudentID() { return studentID; }
int Enrollment::getCourseID() { return courseID; }
string Enrollment::getDate() { return date; }

void Enrollment::setStudentID(int sID) { studentID = sID; }
void Enrollment::setCourseID(int cID) { courseID = cID; }
void Enrollment::setDate(string d) { date = d; }