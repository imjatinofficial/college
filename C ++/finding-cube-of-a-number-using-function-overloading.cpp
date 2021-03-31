#include<iostream>  //header file

using namespace std;    //using namespace

class A //creating class
{
public:
    void fun(int a) //creating function
    {
        a = a*a*a;  //taking cube of the value
        cout << "cube of integer is " << a << endl;
    }
    void fun(float b)   //creating function with same name
    {
        b = b*b*b;  //taking cube of the value
        cout << "cube of float is " << b;
    }
};
int main()  //main function
{
    A obj;  //creating objects of class
    obj.fun(3); //calling function
    obj.fun(4.5f);  //calling function
    return 0;
}
