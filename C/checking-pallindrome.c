#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,rev,temp;
    rev=0;
    printf("Enter number");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
    if(n==rev)
        printf("Number is Pallindrome.");
    else
    printf("Number is not Pallindrome.");
    getch();
}
