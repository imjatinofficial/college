#include<conio.h>
#include<iostream>
using namespace std;
class Abc
{
public:
    int a, b, c;
    void sum()
    {
        c = a + b;
        cout<<"sum = "<<c;
    }
};

int main()
{
    Abc obj1, obj2;
    obj1.a = 10;
    obj1.b = 10;
    obj1.sum();
    obj2.a = 20;
    obj2.b = 10;
    obj2.sum();
}
