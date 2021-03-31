#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the values in the array: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int temp;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[j + 1] < a[j])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                cout << a[j] << endl; 
            }
        }
    }
    cout << "Sorted array is: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}