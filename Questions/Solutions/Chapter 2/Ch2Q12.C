#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area, theta;
    printf("Enter 2 sides of the triangle: ");
    scanf("%f %f", &a, &b);
    printf("Enter angle between 2 sides of the triangle in radians: ");
    scanf("%f", &theta);
    area = a*b*sin(theta)/2;
    c = sqrt(a*a + b*b - 2*a*b*cos(theta));
    printf("Area is %.2f sq units\nThird side of the triangle is %.2f units\n", area, c);
}
