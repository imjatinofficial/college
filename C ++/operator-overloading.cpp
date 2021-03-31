#include<iostream>

using namespace std;

class A
{
    public:
    int p;
    void getdata()
    {
        cout << "Enter the value :";
        cin >> p;
    }
    void show()
    {
        cout << "Value is :" << p;
    }
    A operator + (A ob2)
    {
        A temp;
        temp.p = p - ob2.p;
        return(temp);
    }
};
int main()
{
    A obj1, obj2, obj3;
    obj1.getdata();
    obj2.getdata();
    obj1.show();
    obj2.show();
    obj3 = obj1 + obj2;
    obj3.show();
    return 0;
}
