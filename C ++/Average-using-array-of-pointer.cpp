#include<iostream>

using namespace std;

int main()
{
    int i;
    float sum=0,a[3],*p[3];
    cout << "Enter three values" << endl;
    for(i=0;i<3;i++)
    {
        cin >> a[i];
        p[i]=&a[i];
    }
    for(i=0;i<3;i++)
    {
        sum += *p[i];
    }
    cout << "The average of the values is " << endl;
    cout << sum/3 << endl;
    return 0;
}
