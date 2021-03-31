#include<stdio.h>
#include<conio.h>

void fibo(int,int);

void main()
{
    int a, b;
    printf("Enter first two numbers of the series:\n");
    scanf("%d\n%d",&a,&b);
    fibo(a,b);
    getch();
}


void fibo(int a, int b)
{
    int n, temp = 0, i;
    printf("Enter the number of elements in series in addition to first two numbers:\n");
    scanf("%d",&n);
    printf("The fibonacci series is as follows:\n");
    printf("%d\n%d\n",a,b);
    for(i=0;i<n;i++)
    {
        temp =b;
        b=a+b;
        a=temp;
        printf("%d\n",b);
    }
}
