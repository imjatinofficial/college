#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    for(i=1;i<=50;i++)
    {
        if(i%5==0 && i%7==0)
        {
            printf("%d",i);
        }
    }
    getch();
}
