#include<stdio.h>
#include<conio.h>
void fibo(int,int);
void main()
{
    int a, b;
    printf("Enter value for a & b.");
    scanf("%d%d",&a,&b);
    fibo(a,b);
    getch();
}

void fibo(int a, int b)
{
    int sum = 0, i, n;
    printf("Enter number of series elements.\n");
    scanf("%d",&n);
    printf("%d\n%d",a,b);
    for(i=1;i<=n;i++)
    {
        sum = a+b;
        printf("\n%d",sum);
        a=b;
        b=sum;
    }
}
