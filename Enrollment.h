#include <iostream>
using namespace std;
class Enrollment {
private:
    int enrollmentID;
    int studentID;
    int courseID;
    string date;

public:
    Enrollment() {
        studentID = 0;
        courseID = 0;
        date = "";
    }
    Enrollment(int eID, int sID, int cID, string d);
    int getEnrollmentID();
    int getStudentID();
    int getCourseID();
    string getDate();
    void setStudentID(int sid);
    void setCourseID(int cid);
    void setDate(string d);
};