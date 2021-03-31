#include<stdio.h>
#include<conio.h>

void main()
{
    char line[200];
    int i, vowels, consonants, digits, spaces;
    vowels = consonants = digits = spaces = 0;
    printf("Enter a line of string:\n");
    gets(line);
    for(i=0;line[i]!='\0';++i)
    {

    if(line[i]=='a'|| line[i]=='e'|| line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
    {

        ++vowels;
    }
    else if((line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z'))
    {
        ++consonants;
    }
    else if(line[i]>='0' && line[i]<='9')
    {
        ++digits;
    }
    else if(line[i]==' ')
        ++spaces;
    }
    printf("vowels :%d\n",vowels);
    printf("consonants: %d\n",consonants);
    printf("digits: %d\n",digits);
    printf("spaces :%d",spaces);
    getch();
}
