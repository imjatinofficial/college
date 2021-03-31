#include<stdio.h>
#include<conio.h>

struct my_structure
{
    char name[20];
    int number;
    int rank;
};

void main()
{
    struct my_structure variable = {"abc", 35, 1};
     struct my_structure *ptr;
     ptr = &variable;

    printf("NAME: %s\n", ptr->name);
    printf("NUMBER: %d\n", ptr->number);
    printf("RANK: %d\n", ptr->rank);

     getch();
}
