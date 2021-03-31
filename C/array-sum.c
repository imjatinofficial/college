#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],b[5],i;
    printf("Enter elements in first array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements in second array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        a[i]+=b[i];
    }
    printf("Sum is :");
    for(i=0;i<5;i++)
        {
            printf("%d\n",a[i]);
        }
        getch();
}
