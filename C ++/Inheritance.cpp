#include<iostream>

using namespace std;

class A
{
public:
	void show()
	{
		cout << "Base Class" << endl;
	}
};
class B :public A
{
public:
	void draw()
	{
		cout << "Derived Class" << endl;
	}
};

int main()
{
	B obj1;
	obj1.show();
	obj1.draw();
	return 0;
}
