#include<iostream>

using namespace std;

int main()
{
    int a[10], i=0;
    int *b;
    cout << "Enter 10 values in the array: " << endl;
    b = &a[0];
    for(i=0;i<10;i++)
    {
        cin >> a[i];
    }
    cout << "The addresses of the values in the array are: " << endl;
    for(i=0;i<10;i++)
    {
        cout << b << endl;
        b++;
    }
    return 0;
}
