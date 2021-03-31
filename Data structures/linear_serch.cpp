#include<iostream>

using namespace std;

int main()
{
    int n, a[n], i, element;
    cout << "Enter the number of elements in the array : ";
    cin >> n;
    cout << "Enter the values in the array" << endl;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the values that is to be found in the array: ";
    cin >> element;
    for(i=0; i<n; i++)
    {
        if(a[i]==element){
        cout << "Element found at " << i + 1 ;
        break;
        }
    }
    if(i>=n)
    cout << "Element not found!";
}