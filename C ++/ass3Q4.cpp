#include<iostream>

using namespace std;

int main()
{
    int a , *p;
    cout << "Enter the value : " << endl;
    cin >> a;
    p = &a;
    cout << "The address of variable is " << p;
    return 0;
}
