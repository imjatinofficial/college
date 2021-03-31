#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    char a;
    repeat:
        printf("Enter Number\n");
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }
        printf("Do you want to Exit");
        scanf("%c",&a);
        if(a=='n'||a=='N')
        {
            goto repeat;
        }
        getch();
}
