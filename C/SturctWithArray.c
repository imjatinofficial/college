#include<stdio.h>       //header file
#include<conio.h>       //header file
#include<string.h>      //header file for string functions

struct StudentData      //defining the structure
{
    char stu_name[40];  //char for student name
    int stu_id;         //int for student id
    int stu_age;        //int for student age
};

void main()             //main function
{
    struct StudentData student [5];
    char a[20];
    int i;
    for(i =1;i<=3;i++)
    {
        printf("\n enter name:");
        scanf("%s", &student[i].stu_name);
        printf("\n enter uid:");
        scanf("%d", &student[i].stu_id);
        printf("\n enter age:");
        scanf("%d", &student[i].stu_age);
    }

    for(i =1;i<=3;i++)
    {
        printf("\n\n record of student : %d ",i);
        printf("\n Student Name is: %s", student[i].stu_name);
        printf("\n Student id is : %d ",student[i].stu_id);
        printf("\n Student Age is: %d", student[i].stu_age);
    }
    getch();
}
