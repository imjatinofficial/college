#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("A is GREATEST");
        }
        else
        {
            printf("C is GREATEST");
        }
    }
    else
    {
        if(b>c)
        {
            printf("B is GREATEST");
        }
        else
        {
            printf("C is GREATEST");
        }
    }
    getch();
}
