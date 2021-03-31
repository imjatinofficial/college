#include<iostream>

using namespace std;

class A
{
public:
	int a;
	void getdata()
	{
	    cout << "Enter the integer value :" << endl;
	    cin >> a;
	}
};
class B
{
public:
	float b;
	void getdata()
	{
	    cout << "Enter the float value :" << endl;
	    cin >> b;
	}
};

class C:public A,public B
{
public:
    void addition()
    {
        cout << "The sum of both values is " << a + b;
    }
};
int main()
{
	C obj1;
	obj1.A::getdata();
	obj1.B::getdata();
	obj1.addition();
	return 0;
}
