#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    printf("Enter two num:\n");
    scanf("%d%d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("A is :%d\nB is :%d",a,b);
    getch();
}
