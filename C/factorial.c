#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,fact=1;
    printf("Enter number\n");
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("Factorial of %d=%d",a,fact);
    getch();
}
