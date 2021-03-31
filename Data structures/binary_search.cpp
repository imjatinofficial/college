#include<iostream>

using namespace std;

int main()
{
    int my_array[100], array_size, counter, mid, end, start = 0, element;
    cout << "Enter the size of the array: ";
    cin >> array_size;
    cout << "Enter the values in the array: " << endl;
    for (counter = 0; counter < array_size; counter++)
    {
        cin >> my_array[counter];
    }
    end = array_size - 1;
    cout << "Enter the element to search: ";
    cin >> element;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(my_array[mid] == element)
        {
            cout << "Element is found at position " << mid + 1 << " and location " << mid << endl;
            break;
        }
        else if(element > my_array[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid -1;
        }
    }
    if(start > mid){
            cout << "Element not found!";
    }
    return 0;
}
