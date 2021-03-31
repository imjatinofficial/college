#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, c;
    printf("Enter two num:\n");
    scanf("%d%d",&a,&b);
    c = a;
    a = b;
    b = c;
    printf("A is :%d\nB is :%d",a,b);
    getch();
}
