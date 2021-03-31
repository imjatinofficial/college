#include<iostream>

using namespace std;

int main()
{
    int a[3],i;
    int *p[3];
    cout << "Enter three values" << endl;
    for(i=0;i<3;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<3;i++)
    {
        p[i]=&a[i];
    }
    cout << "The values of array of pointer are: " << endl;
    for(i=0;i<3;i++)
    {
        cout << *p[i] << endl;
    }
    return 0;
}
