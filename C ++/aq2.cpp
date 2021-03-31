#include<iostream>

using namespace std;

class Student
{
public:
    char name[20];
    float cgpa;
    virtual void fun()
    {
        cout << "Enter the name " << endl;
        cin >> name;
        cout << "Enter the CGPA of the student " << endl;
        cin >> cgpa;
        cout << "The name of the student is " << name << " and his CGPA is " << cgpa << endl;
    }
};
class Professor:public Student
{
public:
    char name[20];
    int publications;
    void fun()
    {
        cout << "Enter the name " << endl;
        cin >> name;
        cout << " Enter the number of publications " << endl;
        cin >> publications;
        cout << "The name of the Professor is " << name << " and he has " << publications << "publications";
    }
};
int main()
{
    Student ob,*p;
    Professor ob1;
    p = &ob;
    p->fun();
    p = &ob1;
    p->fun();
    return 0;
}
