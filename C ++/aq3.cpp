#include<iostream>

using namespace std;



class Distance
{
public:
    int feet, inch;
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    void getdata()
    {
        cout << "Enter distance in feet and inch :" << endl;
        cin >> feet >> inch;
    }
    void print()
    {
        cout << "The distance is " << feet << " feet and " << inch << " inches" << endl;
    }
    friend void max(Distance &obj1, Distance &obj2);
};

int main()
{
    Distance obj1, obj2;
    obj1.getdata();
    obj1.print();
    obj2.getdata();
    obj2.print();
    max(obj1,obj2);
    return 0;
}
void max(Distance &obj1, Distance &obj2)
{
    Distance ob1, ob2;
    ob1.feet = (obj1.feet * 12) + obj1.inch;
    ob2.feet = (obj2.feet * 12) + obj2.inch;
    if(ob1.feet > ob2.feet)
        cout << "1st is larger ";
    else
        cout << "2nd is larger ";
}
