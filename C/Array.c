#include<stdio.h>
int main()
{
    int rollno[5], i;
    printf("enter uid: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&rollno[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d",rollno[i]);
    }
}
