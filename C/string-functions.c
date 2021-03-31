#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[20], s2[20], s3[20];
    int n;
    printf("enter string:");
    gets(s1);
    printf("\n** 1.string length operation **\n");
    n = strlen(s1); //string length
    printf("\nsize of string %d", n);
    printf("\n** 2.string copy operation **\n");
    strcpy(s2,s1); //string copy
    puts(s2);
    printf("\n** 3.string reverse operation **\n");
    strrev(s1); //string reverse
    puts(s1);
    printf("\n**4,string concatenation operation **\n");
    printf("enter first string:");
    gets(s2);
    strcat(s1,s2); //string concatenation
    puts(s1);
    printf("\n**5.string lowercase operation**\n");
    printf("enter string:");
    gets(s1);
    strlwr(s1);//string lower case
    puts(s1);
    printf("\n** 6.string uppercase operation **\n");
    printf("enter string ");
    gets(s2);
    strupr(s2); //string uppercase
    puts(s2);
    printf("\n** 8.string compare operation\n");
    n = strcmp(s1,s2);
    if(n==0)
    {
        printf("String is same.");
    }
    else
    {
        printf("String are not same.");
    }

    getch();
}
