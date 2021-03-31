#include<stdio.h>
#include<conio.h>
void main()
{
    int math, science, eng, per;
    printf("Enter the marks in English:\n");
    scanf("%d",&eng);
    printf("Enter the marks in Science:\n");
    scanf("%d",&science);
    printf("Enter the marks in Mathematics:\n");
    scanf("%d",&math);
    per=((eng+math+science)*100)/300;
    printf("Percentage is %d\n",per);
    if(per>90)
        printf("Grade is A");
    else if(per<=90 && per>80)
        printf("Grade is B");
    else if(per<=80 && per>70)
        printf("Grade is C");
    else if(per<=70 && per>50)
        printf("Grade is D");
    else
        printf("FAIL");
    getch();
}
