#include<stdio.h>
#include<conio.h>
void fact(int);
void main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n);
    fact(n);
    getch();
}

void fact(int n)
{
    int fact=1, i;
    for(i=1;n>=i;n--)
    {
        fact=fact*n;
    }
    printf("Factorial of number = %d",fact);
}
