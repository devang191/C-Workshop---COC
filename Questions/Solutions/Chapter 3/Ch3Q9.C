#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
        printf("The triangle is a right angled triangle\n");
    else printf("The triangle is not a right angled triangle\n");
}
