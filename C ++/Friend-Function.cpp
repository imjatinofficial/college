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
	friend void add(A&, B&);
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
	friend void add(A&, B&);
};

void add(A &ob1, B &ob2)
{
	cout << "Sum is" << ob1.a + ob2.b << endl;
}

int main()
{
	A a1;
	B b1;
	a1.setdata(2);
	b1.setdata(4);
	add(a1, b1);
	return 0;
}
