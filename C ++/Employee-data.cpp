#include<iostream>

using namespace std;

class employee
{
private:
    char employee_name[20];
    int employee_number;
public:
    void getdata()
    {
        cout<<"Enter the name and the number of the employee :"<<endl;
        cin>>employee_name>>employee_number;
    }
    void putdata()
    {
        cout<<"Name of the Employee is :"<<employee_name<<endl;
        cout<<"Number of the Employee is :"<<employee_number<<endl;
    }
};

int main()
{
    employee e1[100];
    int i, n;
    cout<<"Enter the number of employees :"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
            e1[i].getdata();
    }
    for(i=0;i<n;i++)
    {
            e1[i].putdata();
    }
    return 0;
}
