#include<iostream>

using namespace std;

class A
{
public:
    char company_name[20];
    void company()
    {
        cout << "Enter the name of the company :"<<endl;
        cin>>company_name;
    }
};
class B:public A
{
public:
    char model_name[20];
    int man_year;
    void car_details()
    {
        cout << "Enter the name of "<<company_name<<" model and the manufacture year :"<<endl;
        cin>>model_name>>man_year;
    }
};
class C:public B
{
public:
    void show()
    {
        cout << "Your car is " << company_name << " " << model_name << endl;
        cout << "It was manufactured in " << man_year;
    }

};
int main()
{
    C obj1;
    obj1.company();
    obj1.car_details();
    obj1.show();
    return 0;
}
