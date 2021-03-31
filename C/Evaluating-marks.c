#include<stdio.h>
#include<conio.h>
void main()
{
    float avg, per, english, hindi, maths, science, ss;
    printf("Enter the marks in English :\n");
    scanf("%f",&english);
    printf("Enter the marks in Hindi :\n");
    scanf("%f",&hindi);
    printf("Enter the marks in Maths :\n");
    scanf("%f",&maths);
    printf("Enter the marks in Science :\n");
    scanf("%f",&science);
    printf("Enter the marks in Social Science :\n");
    scanf("%f",&ss);
    avg = (english+hindi+maths+science+ss)/5;
    per = ((english+hindi+maths+science+ss)*100)/500;
    printf("Average marks are :%f\nPercentage is :%f",avg,per);
    getch();
}
