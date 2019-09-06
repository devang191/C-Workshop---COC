#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three unequal integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b)
        if(a > c)
            if(b > c)
               printf("The numbers in decreasing order are %d, %d and %d\n", a, b, c);
            else printf("The numbers in decreasing order are %d, %d and %d\n", a, b, c);
        else printf("The numbers in decreasing order are %d, %d and %d\n", c, a, b);
    else if(b > c)
            if(c > a)
                printf("The numbers in decreasing order are %d, %d and %d\n", b, c, a);
            else printf("The numbers in decreasing order are %d, %d and %d\n", b, a, c);
          else printf("The numbers in decreasing order are %d, %d and %d\n", c, b, a);
}
