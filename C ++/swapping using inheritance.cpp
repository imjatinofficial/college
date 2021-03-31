#include<iostream>

using namespace std;

class A
{
    public:
        int a, b;
        void getdata()
        {
            cout << "Enter the values of the two integers " << endl;
            cin >> a >> b;
        }
        void sum_int()
        {
            cout << "The sum of the two integers is " << a+b << endl;
        }

};
class B: public A
{
public:
    float c, d;
    void sum_float()
    {
        cout << "Enter the values of two floating numbers " << endl;
        cin >> c >> d;
        cout << "The Sum of the two floating numbers is " << c+d << endl;
    }
};
class C: public B
{
public:
    void sum_both()
    {
        cout << "The sum of one floating and one integer is "<< (a+b)+(c+d) << endl;
    }
};
int main()
{
    C obj1;
    obj1.getdata();
    obj1.sum_int();
    obj1.sum_float();
    obj1.sum_both();
    return 0;
}

