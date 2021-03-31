#include<stdio.h>
#include<conio.h>

void main()
{
        int time;
        repeat:
        printf("Enter time in hour only:\n");
        scanf("%d",&time);
        switch(time)
        {
            case 5:
            printf("GOOD MORNING.\nEat breakfast and have a healthy day.\n");
            break;
            case 6:
            printf("GOOD MORNING.\nEat breakfast and have a healthy day.\n");
            break;
            case 7:
            printf("GOOD MORNING.\nEat breakfast and have a healthy day.\n");
            break;
            case 8:
            printf("GOOD MORNING.\nEat breakfast and have a healthy day.\n");
            break;
            case 9:
            printf("GOOD MORNING.\nEat breakfast and have a healthy day.\n");
            break;
            case 10:
            printf("GOOD MORNING.\nEat breakfast and have a healthy day.\n");
            break;
            case 11:
            printf("GOOD AFTERNOON.\nTime for lunch.\n");
            break;
            case 12:
            printf("GOOD AFTERNOON.\nTime for lunch.\n");
            break;
            case 13:
            printf("GOOD AFTERNOON.\nTime for lunch.\n");
            break;
            case 14:
            printf("GOOD AFTERNOON.\nTime for lunch.\n");
            break;
            case 15:
            printf("GOOD AFTERNOON.\nTime for lunch.\n");
            break;
            case 16:
            printf("GOOD AFTERNOON.\nTime for lunch.\n");
            break;
            case 17:
            printf("GOOD EVENING.\nHave some snacks.\n");
            break;
            case 18:
            printf("GOOD EVENING.\nHave some snacks.\n");
            break;
            case 19:
            printf("GOOD EVENING.\nHave some snacks.\n");
            break;
            case 20:
            printf("Eat dinner and sleep tight.\nGOOD NIGHT.\n");
            break;
            case 21:
            printf("Eat dinner and sleep tight.\nGOOD NIGHT.\n");
            break;
            case 22:
            printf("Eat dinner and sleep tight.\nGOOD NIGHT.\n");
            break;
            default:
            printf("Don't wake. Get back to sleep.\n");
        }
        goto repeat;
}
