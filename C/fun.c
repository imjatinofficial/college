#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
{
int a,b;
printf("enter a&b");
scanf("%d%d",&a,&b);
swap(a,b);
getch();
}
void swap(int x,int y)
{
int t;
t=x;
x=y;
y=t;
printf("after swapping");
printf("\ta=%d,b=%d",x,y);
}
