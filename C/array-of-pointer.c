#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3],i;
    int *p[3];
    printf("Enter three values\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        p[i]=&a[i];
    }
    printf("The values of array of pointer are:\n");
    for(i=0;i<3;i++)
    {
        printf("%d\n",*p[i]);
    }
    getch();
}
