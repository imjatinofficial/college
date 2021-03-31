//Selection sort

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int myArray[n];
    cout << "Enter the values in the array:";
    for(int i = 0; i < n; i++)
        cin >> myArray[i];
    cout << "Array in the sorted form is: ";
    int min = myArray[0];
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(min > myArray[j])
                min = myArray[j];   
        }
        for(int k = i; k < n; k++)
        {
            if(min == myArray[k])
            {
                myArray[k] = myArray[i];
                myArray[i] = min;
            }
        }
        min = myArray[i+1];
    }
    for(int i = 0; i < n; i++)
        cout << myArray[i] << " ";
    return 0;
}