#include<iostream>

using namespace std;

class worker
{
private:
    int wno , hrwk;
    float wgrate , totwage;
    char wname[20];
public:
    void In_data()
    {
        cout << "Enter the worker name , worker number , hours work , wage rate per hour :" << endl;
        cin >> wname >> wno >> hrwk >> wgrate ;
    }
    void calcwg()
    {
        totwage = hrwk * wgrate;
    }
    void Out_data()
    {
        cout << "The name of the worker is " << wname << endl;
        cout << "His number is " << wno << endl;
        cout << "His total wages are " << totwage << endl;
    }
};
int main()
{
    worker w1;
    w1.In_data();
    w1.calcwg();
    w1.Out_data();
    return 0;
}
