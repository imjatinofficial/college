#include<iostream>

using namespace std;

class student
{
public:
    char name[20];
    int age;
    student()
    {
        age = 18;
    }
    void getdata()
    {
        cout << "Enter the name of the student " << endl;
        cin >> name;
    }
    void print()
    {
        cout << "The name of the student is " << name << " and his age is " << age  << endl;
    }
};

int main()
{
    student obj1;
    obj1.getdata();
    obj1.print();
    return 0;
}
