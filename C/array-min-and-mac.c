#include<stdio.h>
void main()
{
    int a[100];
    int i,max, min, n;
    printf("Enter size of the array.\n");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("maximum=%d\n",max);
    printf("minimum=%d\n",min);

}
