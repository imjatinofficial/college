#include<iostream>

using namespace std;

class student
{
private:
	char student_name[20];
	int uid, hindi, eng, maths, avg;
public:
	void getdata()
	{
		cout << "Enter the name of the student :" << endl;
		cin >> student_name;
		cout << "Enter the uid of the student :" << endl;
		cin >> uid;
		cout << "Enter the marks in Hindi , English and Maths" << endl;
		cin >> hindi >> eng >> maths;
	}
	void average();
	void putdata()
	{
		cout << "The name of the student is :" << student_name << endl;
		cout << "The uid of the student is :" << uid << endl;
		cout << "The average marks of the student are :" << avg << endl;
	}
};
void student::average()
{
	avg = (hindi + eng + maths) / 3;
}

int main()
{
	student stu1, stu2;
	stu1.getdata();
	stu1.average();
	stu1.putdata();
	stu2.getdata();
	stu2.average();
	stu2.putdata();
	return 0;
}
