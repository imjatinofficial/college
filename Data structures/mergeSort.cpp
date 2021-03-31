#include <iostream>

using namespace std;

int *mergeSort(int a[], int n);

int main()
{
    int n;
    
    cout << "Enter the size of the array: "; 
    cin >> n;
    int a[n];
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int *p;
    p = mergeSort(a, n);
    cout << "mergeSorted Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
}

int *mergeSort(int a[], int n)
{
    if (n < 2)
    {
        return a;
    }

    int lsize = n / 2;
    int rsize = n - lsize;
    int left[lsize];
    int right[rsize];

    for (int i = 0; i < lsize; i++)
    {
        left[i] = a[i];
    }

    for (int i = n / 2, j = 0; i < n; i++, j++)
    {
        right[j] = a[i];
    }

    int *l = mergeSort(left, lsize);

    int *r = mergeSort(right, rsize);

    int p = 0, q = 0, s = 0;
    while (p != lsize && q != rsize)
    {
        if (l[p] < r[q])
        {
            a[s] = l[p];
            p++;
        }
        else
        {
            a[s] = r[q];
            q++;
        }
        s++;
    }
    while (p < lsize)
    {
        a[s] = l[p];
        p++;
        s++;
    }
    while (q < rsize)
    {
        a[s] = r[q];
        q++;
        s++;
    }
    return a;
}