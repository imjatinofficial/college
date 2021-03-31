#include <iostream>

using namespace std;

int binary_search_function(int a[], int elm, int st, int en);

int main()
{
    int my_array[100], counter, element, end, array_size, location;
    cout << "Enter the size of the array: ";
    cin >> array_size;
    end = array_size - 1;
    cout << "Enter the values in the array: " << endl;
    for (counter = 0; counter < array_size; counter++)
    {
        cin >> my_array[counter];
    }
    cout << "Enter the value  of the element that you want to search in the array: ";
    cin >> element;
    location = binary_search_function(my_array, element, 0, end);
    if (location > 0)
    {
        location += 1;
        cout << "Element found at " << location;
    }
    else
    {
        cout << "Element not found!";
    }
    return 0;
}

int binary_search_function(int a[], int elm, int st, int en)
{
    int mid = (st + en) / 2;
    if (a[mid] == elm)
    {
        return mid;
    }
    else if(elm < a[mid])
    {
        return binary_search_function(a, elm, st, mid - 1);
    }
    else
    {
       return binary_search_function(a, elm, mid + 1, en);
    }
}