#include<iostream>

using namespace std;

int main()
{
    int a[10];
    cout<<"Enter the values in the array: "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout << "The values in the array are: " << endl;
    for(int i=0;i<10;i++)
    {
        cout<<a[i];
    }
}