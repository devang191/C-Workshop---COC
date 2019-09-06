#include <stdio.h>
#include <math.h>
int main()
{
    float x1, x2, x3, y1, y2, y3, a, b, c, s, area;
    printf("Enter co-ordinates of the first vertex of the triangle: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter co-ordinates of the second vertex of the triangle: ");
    scanf("%f %f", &x2, &y2);
    printf("Enter co-ordinates of the third vertex of the triangle: ");
    scanf("%f %f", &x3, &y3);
    a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    c = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area is %.2f sq units\nPerimeter of the triangle is %.2f units\n", area, 2*s);
}
