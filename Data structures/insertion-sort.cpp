#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n], temp;
    cout << "Enter the values in the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        temp = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    cout << "Sorted array is: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}