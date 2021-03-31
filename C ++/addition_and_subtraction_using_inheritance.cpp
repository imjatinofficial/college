#include<iostream>

using namespace std;

class A
{
public:
	int a, b;
	void getdata()
	{
	    cout << "Enter the numbers" << endl;
	    cin >> a >> b;
	}

	void addition()
	{
		cout << "The sum of two numbers is " << a + b << endl;
	}
};
class B: public A
{
public:
	void subtraction()
	{
		cout << "The difference of the two numbers is " << a - b << endl;
	}
};

int main()
{
	B a1;
	a1.getdata();
	a1.addition();
	a1.subtraction();
	return 0;
}
