#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, sum, sub, mul, div, mod;
    printf("Enter two num:\n");
    scanf("%d%d",&a,&b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;
    printf("Sum of two num is : %d\nSub of two num is : %d\nMul of two num is : %d\nDiv of two num is : %d\nMod of two num is : %d",sum,sub,mul,div,mod);
    getch();
}
