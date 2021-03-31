#include<iostream>

using namespace std;

class B;
class A
{
private:
    int a;
public:
    void assign(int y)
    {
        a = y;
    }
    friend void swap(A &,B &);
};
class B
{
private:
    int b;
public:
    void assign(int y)
    {
        b = y;
    }
    friend void swap(A&,B&);
};

void swap(A &ob1,B &ob2)
{
int temp;
temp =ob1.a;
ob1.a = ob2.b;
ob2.b = temp;
}
int main()
{
A a1;
B b1;
swap(&a1,&b1);
return 0;
}
