#include<iostream>

using namespace std;

class A
{
private:
	int uid;
	char name[20];
public:
	void getdata()
	{
		cout << "Enter the name and the uid of the student :" << endl;
		cin >> name >> uid;
	}
	friend class xyz;
};

class xyz
{
public:
	void show(A &o)
	{
		cout << "uid is " << o.uid << " name is " << o.name;
	}
};
int main()
{
	A a1;
	a1.getdata();
	xyz x1;
	x1.show(a1);
	return 0;
}
