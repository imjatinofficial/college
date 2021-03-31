#include<iostream>

using namespace std;

class UIC
{
public:
    char name[20], course[20];
    int uid;
    void student_details()
    {
        cout << "Enter the name and UID  of the student :"<<endl;
        cin >> name >> uid;
        cout << "Enter the course selected "<< endl;
        cin >> course;
    }
};
class MCA: public UIC
{
public:
    char semester[20],specification[20];
    void details()
    {
        cout << "Enter the name of specification and semester :"<<endl;
        cin>>specification>>semester;
    }
    void display()
    {

        cout << "The name of the student is " << name << endl;
        cout << "The UID of the student is " << uid << endl;
        cout << "The student is in " << course << endl;
        cout << "The specification of the student is " << specification << " in " << semester << "th semester" << endl;
    }
};
class BCA:public UIC
{
public:
    char semester[20],language[20];
    void details()
    {
        cout << "Enter the semester and language in the semester taught :"<< endl;
        cin>> semester >> language;
    }
    void display()
    {

        cout << "The name of the student is " << name << endl;
        cout << "The UID of the student is " << uid << endl;
        cout << "The student is in " << course << endl;
        cout << "The language of the student is " << language << " in " << semester << "th semester" << endl;
    }

};

int main()
{
    UIC obj0;
    MCA obj1;
    BCA obj2;
    obj0.student_details();
    if(obj0.course == 'MCA' || obj0.course == 'mca')
    {
        obj1.MCA::details();
        obj1.MCA::display();
    }
    else if(obj0.course == 'BCA' || objo.course == 'bca')
    {
        obj2.BCA::details();
        obj2.BCA::display();
    }
    else{
        cout << "wrong course selected!";
    }
    return 0;
}
