#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter three unequal numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a > b)
        if(a > c)
           printf("The greatest number is %f\n", a);
        else printf("The greatest number is %f\n", c);
    else if(b > c)
            printf("The greatest number is %f\n", b);
         else printf("The greatest number is %f\n", c);
}
