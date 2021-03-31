#include<iostream>

using namespace std;

class B;
class A
{
private:
	int a;
public:
	void setdata(int x)
	{
		a = x;
	}
	friend void swap(A&, B&);
};

class B
{
private:
	int b;
public:
	void setdata(int y)
	{
		b = y;
	}
	friend void swap(A&, B&);
};

void swap(A &ob1, B &ob2)
{
	int temp = 0;
	temp = ob1.a;
	ob1.a = ob2.b;
	ob2.b = temp;
	cout << "a is " << ob1.a <<"b is " << ob2.b << endl;
}

int main()
{
	A a1;
	B b1;
	a1.setdata(2);
	b1.setdata(4);
	swap(a1, b1);
	return 0;
}
