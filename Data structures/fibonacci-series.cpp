#include <iostream>

using namespace std;

int main()
{
    int first = 0, second = 1, next, n, c, count = 0, i, j, a[20];
    cout << "Enter the number of members in the fibonacci series : " << endl;
    cin >> n;
    cout << "Terms in the series are " << endl;
    for (c = 0; c < n; c++)
    {
        if (c <= 1)
            next = c;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << endl;
        if (next - first > 1)
        {
            for (i = first + 1; i < next; i++)
            {
                a[j] = i;
                count++;
                j++;
            }
        }
    }
    cout << "The missing terms are " << endl;
    for (j = 0; j < count; j++)
    {
        cout << a[j] << endl;
    }
    return 0;
}
