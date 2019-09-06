#include <stdio.h>
#include <math.h>
int main()
{
    float length, breadth, rad, area;
    printf("Enter length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);
    area = length*breadth;
    rad = sqrt(area*7/22);
    printf("Area is %.2f sq units\nRadius of the circle with same area is %.2f units\n", area, rad);
}
