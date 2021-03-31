#include<stdio.h>
#include<conio.h>
int factorial(int);
void main()
{
    int n, p;
    printf("Enter a number\n");
    scanf("%d",&n);
    p = factorial(n);
    printf("The Factorial of %d is %d",n,p);
    getch();
}

int factorial (int n)
{
    int f;
    if(n==1)
    {
        return 1;
    }
    else
    {
        f = n*factorial(n-1);
        return f;
    }
}
