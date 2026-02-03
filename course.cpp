#include "Course.h"
Course::Course(int id, string t, int d) {
    courseID = id;
    title = t;
    duration = d;
}
int Course::getID() { return courseID; }
string Course::getTitle() { return title; }
int Course::getDuration() { return duration; }
void Course::setTitle(string t) { title = t; }
void Course::setDuration(int d) { duration = d; }