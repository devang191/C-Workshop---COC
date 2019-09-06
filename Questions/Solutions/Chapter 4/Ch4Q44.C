#include <stdio.h>

int main()
{
    float a, b;
    short choice;
    do
    {
    printf("Calculator\n");
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter 5 to Quit\n");
    printf("Enter your choice: ");
    scanf("%hd", &choice);
    if(choice > 0 && choice < 5)
      {
           printf("Enter two integers: ");
           scanf("%f %f", &a, &b);
           switch(choice)
           {
               case 1: printf("Answer = %f\n", a+b); break;
               case 2: printf("Answer = %f\n", a-b); break;
               case 3: printf("Answer = %f\n", a*b); break;
               case 4: if(b!=0)
                          printf("Answer = %f\n", a/b);
                       else printf("Division by Zero Error\n");break;
           }
      }
    else if(choice != 5)
            printf("Wrong Choice\n");
   }while(choice != 5);
}
