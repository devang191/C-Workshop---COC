#include <stdio.h>

int main()
{
    int a, b;
    short choice;
    printf("Calculator\n");
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter 5 for Remainder\n");
    printf("Enter your choice: ");
    scanf("%hd", &choice);
    if(choice > 0 && choice < 6)
      {
           printf("Enter two integers: ");
           scanf("%d %d", &a, &b);
           switch(choice)
           {
               case 1: printf("Answer = %d\n", a+b); break;
               case 2: printf("Answer = %d\n", a-b); break;
               case 3: printf("Answer = %d\n", a*b); break;
               case 4: printf("Answer = %d\n", a/b); break;
               case 5: printf("Answer = %d\n", a%b);
           }
      }
    else printf("Wrong Choice\n");
}
