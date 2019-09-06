#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, x1, x2;
    printf("Enter co-efficients of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);
    x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
    x2 = (-b + sqrt(b*b-4*a*c))/(2*a);
    printf("Root 1 is %.2f\nRoot 2 is %.2f\n", x1, x2);
}
