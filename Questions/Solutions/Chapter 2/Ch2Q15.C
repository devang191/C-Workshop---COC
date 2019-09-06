#include <stdio.h>
int main()
{
    float a1, b1, c1, a2, b2, c2, x, y;
    printf("Enter co-efficients of the first equation: ");
    scanf("%f %f %f", &a1, &b1, &c1);
    printf("Enter co-efficients of the second equation: ");
    scanf("%f %f %f", &a2, &b2, &c2);
    y = (c1*a2 - c2*a1)/(b1*a2 - b2*a1);
    x = (c1*b2 - c2*b1)/(b2*a1 - b1*a2);
    printf("x = %.2f\ny = %.2f\n", x, y);
}
