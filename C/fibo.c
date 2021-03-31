#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
{
    int a, b;
    printf("Enter the values of a and b\n");
    scanf("%d\n%d",&a,&b);
    swap(a,b);
    getch();
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The values of a and b are: %d\n%d",a,b);
}
