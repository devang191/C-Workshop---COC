#include <stdio.h>

int main()
{
    float rad, area, circum;
    printf("Enter radius of the circle: ");
    scanf("%f", &rad);
    area = rad*rad*22/7;
    circum = 2*rad*22/7;
    printf("Area is %.2f sq units\nCircumference is %.2f units\n", area, circum);
}
