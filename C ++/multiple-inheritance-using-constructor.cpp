#include<iostream>

using namespace std;

class A
{
public:
	int a;
	A()
	{
	    cout << "Enter the integer value :" << endl;
	    cin >> a;
	}
};
class B
{
public:
	float b;
	B()
	{
	    cout << "Enter the float value :" << endl;
	    cin >> b;
	}
};

class C:public A,public B
{
public:
    sum()
    {
        cout << "The sum of both values is " << a + b;
    }
};
int main()
{
	C obj1;
	obj1.sum();
	return 0;
}
