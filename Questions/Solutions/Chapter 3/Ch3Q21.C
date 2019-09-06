#include <stdio.h>

int main()
{
    short int mno;
    int yr;
    printf("Enter Month Number: ");
    scanf("%d", &mno);
    switch(mno)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: printf("31 days\n"); break;
    case 4:
    case 6:
    case 9:
    case 11: printf("30 days\n"); break;
    case 2: printf("Enter year: ");
            scanf("%d", &yr);
            if(yr%400==0||yr%4==0&&yr%100!=0)
                printf("29 days\n");
            else printf("28 days\n"); break;
    default: printf("The month no has to be between 1 and 12\n");
    }
}
