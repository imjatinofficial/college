#include <iostream>

using namespace std;

int main()
{
    int a[100], array_size, counter, element, position;
    cout << "Enter the size of the array: ";
    cin >> array_size;
    cout << "Enter the values in the array: ";
    for (counter = 0; counter < array_size; counter++)
    {
        cin >> a[counter];
    }
    cout << "Enter the number that is to be inserted in the array: ";
    cin >> element;
    cout << "Enter the position where you want to insert the element: ";
    cin >> position;
    position = position - 1;
    for (counter = array_size; counter >= position; counter--)
    {
        a[counter + 1] = a[counter];
    }
    a[position] = element;
    array_size += 1;
    cout << "Final array is: " << endl;
    for (counter = 0; counter < array_size; counter++)
    {
        cout << a[counter] << endl;
    }
}