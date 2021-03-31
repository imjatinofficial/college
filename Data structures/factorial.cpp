#include<iostream>

using namespace std;

int main()
{
    int a, fact = 1, i;
    cout << "Enter the value of the number: " << endl;
    cin >> a;
    for(i = 1; i <= a; i++)
    {
        fact = fact*i;
    }
    cout << "Factorial of the number is: " << fact;    
}