#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a==b&&a==c)
        printf("Equilateral Triangle\n");
    else if(a==b||b==c||c==a)
            printf("Isosceles Triangle\n");
         else printf("Scalene Triangle\n");
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area is %.2f sq units\nPerimeter of the triangle is %.2f units\n", area, 2*s);
}
