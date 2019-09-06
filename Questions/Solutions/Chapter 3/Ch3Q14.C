#include <stdio.h>

int main()
{
    int yr;
    printf("Enter the year: ");
    scanf("%d", &yr);
    if(yr%4==0)
      if(yr%100==0)
        if(yr%400==0)
           printf("Leap Year\n");
        else printf("Not a Leap Year\n");
      else printf("Leap Year\n");
    else printf("Not a Leap Year\n");
}
