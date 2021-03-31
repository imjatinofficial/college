#include<iostream>

using namespace std;

int main()
{
    int n, myArray[n];
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the values in the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> myArray[i];
    }
    cout << "Sorted in Ascending form: ";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(myArray[j] > myArray[j + 1])
            {
                int temp = 0;
                temp = myArray[j];
                myArray[j] = myArray[j + 1];
                myArray[j + 1] = temp;
            }
        }
    }
    cout << "The values in the array are: ";
    for(int i = 0; i < n; i++)
    {
        cout << myArray[i];
    }
    
}