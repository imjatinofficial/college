#include <iostream>

using namespace std;

int main()
{
    int my_array[100], array_size, counter, position, element;
    cout << "Enter the size of the array: ";
    cin >> array_size;
    cout << "Enter the values in the array: " << endl;
    for (counter = 0; counter < array_size; counter++)
    {
        cin >> my_array[counter];
    }
    cout << "Enter the element that you want to delete: ";
    cin >> element;
    for (counter = 0; counter < array_size; counter++)
    {
        if (my_array[counter] == element)
        {
            position = counter;
            cout << "Element found!\nPerforming deletion." << endl;
            for (counter = position; counter <= array_size; counter++)
            {
                my_array[counter] = my_array[counter + 1];
            }
            array_size -= 1;
            cout << "New array is: " << endl;
            for (counter = 0; counter < array_size; counter++)
            {
                cout << my_array[counter] << endl;
            }
            break;
        }
    }
    if (counter > array_size)
    {
        cout << "Element not Found!\nExiting";
    }

    return 0;
}
