#include <stdio.h>

int main()
{
    float f(float);
    float a, b;
    printf("Enter a and b: ");
    scanf("%f %f", &a, &b);
    printf("Answer = %f\n", (f(a)+f(b))/(f(a)-f(b)));
}
float f(float x)
{
    return x*-2*x+10;
}
