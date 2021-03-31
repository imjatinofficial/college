#include<iostream>

using namespace std;

class student
{
    private:
    int uid;
    char name[20];
    class address
    {
    private:
        int h_n;
        char city[20];
        char state[20];
    public:
        void getadd()
        {
            cout << "Enter house number , city , state :" << endl;
            cin >> h_n >> city >> state;
        }
        void show()
        {
            cout << "House no. - " << h_n << endl;
            cout << "City - " << city << endl;
            cout << "State - " << state << endl;
        }
    };
    address a1;
    public:
        void getdata()
        {
            cout << "Enter uid and name of the student" << endl;
            cin >> uid >> name;
        }
        void getadd()
        {
            a1.getadd();
        }
        void show()
        {
            a1.show();
        }
};

int main()
{
    student s1;
    s1.getdata();
    s1.getadd();
    s1.show();
    return 0;
}
