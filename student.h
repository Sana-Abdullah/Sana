#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    int student_ID;
    string name;
    string email;
    int age;
public:
    Student(int id, string n, string e, int a);

    int getID();
    string getName();
    string getEmail();
    int getAge();
    void setName(string n);
    void setEmail(string e);
    void setAge(int a);
};
