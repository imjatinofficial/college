#include<iostream>

using namespace std;

class A
{
public:
    int uid;
    char name[20];
    void getdata()
    {
        cout<<"Enter the name and uid of the student: "<<endl;
        cin>>name>>uid;
    }
};
class B: public A
{
public:
    void show()
    {
        cout << "The name of the student is "<<name<<endl;
        cout << "The uid of the student is "<<uid<<endl;
    }
};
int main()
{
    B obj1;
    obj1.getdata();
    obj1.show();
    return 0;
}
