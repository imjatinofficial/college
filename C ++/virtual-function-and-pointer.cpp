#include<iostream>  //header file

using namespace std;    //using naemspace

class A //creating class
{
public:
    virtual void fun()  //creating virtual function
    {
        cout << "This is a base class.";
    }
};
class B:public A    //inheriting class A into class B
{
public:
    void fun()  //creating function
    {
        cout << "This is a derived class"<<endl;
    }
};
int main()  //main function
{
    A ob1,*p;   //creating objects and pointer
    B ob;   //creating object of another class
    p = &ob;    //Assigning value to the pointer
    p->fun();   //calling function using pointer
    p = &ob1;   //Assigning other value to the pointer
    p->fun();   //Again calling function using pointer
    return 0;
}
