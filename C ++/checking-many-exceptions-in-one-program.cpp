#include<iostream>

using namespace std;

void test(int);

int main()
{
    int a;
    cout << "Enter the value of a ";
    cin >> a;
    test(a);
    return 0;
}
void test(int i)
{
    try
    {
        if(i == 0)
        {
            throw(0);
        }
        else if(i == -1)
        {
            throw(1.5f);
        }
        else if(i == 1)
        {
            throw('i');
        }
        else
        {
            cout << "The value of a is " << i;
        }
    }
    catch(int x)
    {
        cout << "Exception is Integer";
    }
    catch(float y)
    {
        cout << "Exception is Float";
    }
    catch(char z)
    {
        cout << "Exception is Char";
    }
}
