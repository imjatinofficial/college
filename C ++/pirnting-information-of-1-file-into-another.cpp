#include<iostream>
#include<fstream>

using namespace std;

class student
{
public:
    int uid;
    char name[10],ch[100];
    void getdata()
    {
        cout << "Enter the name and uid of the student :" << endl;
        cin >> name >> uid;
    }
    void show()
    {
        ofstream f1;
        f1.open("file1.txt",ios::app);
        f1 << uid << name << endl;
    }
    void print()
    {
        ifstream f1;
        f1.open("file1.txt");
        fstream f2;
        f2.open("abc.txt");
        while(!f1.eof())
        {
            f1.getline(ch,100);
            f2 << ch;
        }
    }
};

int main()
{
    int i;
    student obj[3];
    student ob;
    for(i = 0; i < 3; i++)
    {
        obj[i].getdata();
    }
    for(i = 0; i < 3; i++)
    {
        obj[i].show();
    }
    ob.print();
    return 0;
}
