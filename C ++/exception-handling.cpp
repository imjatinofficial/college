#include<iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter the values :" << endl;
    cin >> a >> b;
    int x = a - b;
    try
    {
        if(x != 0)
        {
            cout << "value of x/a is " << a/x;
        }
        else{
            throw(x);
        }
    }
    catch(int i)
    {
        cout << "Exception of x = " <<x;
    }
    return 0;
}
