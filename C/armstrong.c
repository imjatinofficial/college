#include<stdio.h>
#include<conio.h>
int power(int, int);

void main()
{
    int n, sum=0,temp,rem, digits=0;
    printf("Enter an integer");
    scanf("%d",&n);
    temp-n;
    while(temp!=0)
    {
        digits++;
        temp=temp/10;
    }
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum + power(rem,digits);
        temp=temp/10;
    }
    if(n==sum)
        printf("No. is Armstrong",n);
        else
        printf("No. is not an Armstrong.");
    getch();
}
int power(int k, int r)
{
    int c, p=1;
    for(c=1;c<=r;c++)
        p=p*k;
    return p;
}
