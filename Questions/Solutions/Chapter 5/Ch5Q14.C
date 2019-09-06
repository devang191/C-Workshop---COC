#include <stdio.h>

int main()
{
    float max(float, float);
    float a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    printf("Maximum = %f\n", max(max(a, b), max(c, d)));
    printf("Maximum = %f\n", max(max(max(a, b), c), d));
}
float max(float x, float y)
{
    return x>y?x:y;
}
