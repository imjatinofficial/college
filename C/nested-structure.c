#include<stdio.h>
#include<conio.h>
#include<string.h>

struct library_book_issue
    {
        int block;
        char book_name[40];
        int issue_date;
    };
struct StudentData
{
    char stu_name[40];  //char for student name
    int stu_id;         //int for student id
    int stu_age;
    struct library_book_issue
};

void main()
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
        printf("\nEnter Block number of the library:");
        scanf("%d",&student[i].library_book_issue.block);
        printf("\nEnter the Book name:");
        scanf("%s",&student[i].library_book_issue.book_name);
        printf("\nEnter the Issue Date in DDMMYYYY:");
        scanf("%d",student[i].library_book_issue.issue_date);
    }

    for(i =1;i<=3;i++)
    {
        printf("\n\n record of student : %d ",i);
        printf("\n Student Name is: %s", student[i].stu_name);
        printf("\n Student id is : %d ",student[i].stu_id);
        printf("\n Student Age is: %d", student[i].stu_age);
        printf("\nLibrary block is:%d",student[i].library_book_issue.block);
        printf("\nBook name is:%s",student[i].library_book_issue.book_name);
        printf("\nIssue date for book is:",library_book_issue.issue_date);
    }
}
