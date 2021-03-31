#include<iostream>

using namespace std;
int main()
{
    int a[3], i, sum=0;
    int *p;
    cout << "Enter 3 value in array";
    for(i=0;i<3;i++)
    {
        cin >> a[i];
    }
    p = &a[0];
    for(i=0;i<3;i++)
    {
        sum += *p[i];
        p++;
    }
    cout << sum/3;
    cout << *p;
    return 0;
}
