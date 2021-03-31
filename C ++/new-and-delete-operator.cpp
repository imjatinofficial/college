#include<iostream>

using namespace std;

class student
{
public:
    int eng , hindi , maths , avg;
    char name[20];
    void getdata()
    {
        cout << "Enter the name of the student ";
        cin >> name;
        cout << "Enter the marks in English , Hindi and Mathematics respectively :" << endl;
        cin >> eng >> hindi >> maths;
    }
    void average()
    {
        avg = (eng + hindi + maths )/3;
    }
    void getgrade()
    {
        cout << "Name of the student is " << name << endl;
        cout << "His average is " << avg << endl;
        if(avg > 90)
            cout << "Grade is A" << endl;
        else if(avg > 80)
            cout << "Grade is B" << endl;
        else if(avg >70)
            cout << "Grade is C" << endl;
        else if(avg>60)
            cout << "Grade is D" << endl;
        else
            cout << "Student is FAIL" << endl;
    }
};

int main()
{
    int n , i;
    cout << "Enter the number of students " << endl;
    cin >> n;
    student *ptr = new student[n];
    for(i=0;i<n;i++)
    {
        ptr->getdata();
        ptr->average();
        ptr->getgrade();
    }
    delete ptr;
    return 0;
}
