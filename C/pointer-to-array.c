#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3], i;
    int *p;
    printf("Enter 3 value in array;\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    p = &a[0];
    for(i=0;i<3;i++)
    {
        printf("%d",*p++);
    }
    getch();
}
