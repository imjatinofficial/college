#include<iostream>
#include<fstream>

using namespace std;
class student
{
    int uid;
    char name[20];
    void getdata()
    {
        cout << "Enter the name and uid of the student :" << endl;
        cin >> name >> uid;
    }
};

int main()
{
    int n;
    student s1;
    fstream f1;

    f1.open("file handling.txt");
    f1 << "Name of the student is " << name;
    f1 << "uid is " << uid;
    f1.close();
    cout << "information stored ";
    return 0;
}
