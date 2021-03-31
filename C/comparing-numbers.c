#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("A is GREATEST");
    else if(b>a && b>c)
        printf("B is GREATEST");
    else
        printf("C is GREATEST");
    getch();
}
