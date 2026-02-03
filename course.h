#include <iostream>
#include <string>
using namespace std;
class Course {
private:
    int courseID;
    string title;
    int duration;
public:
    Course(int id, string t, int d);
    int getID();
    string getTitle();
    int getDuration();
    void setTitle(string t);
    void setDuration(int d);
};
