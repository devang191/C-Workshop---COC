#include <stdio.h>
#include <math.h>
int main()
{
    float p, n, r, simple, comp;
    printf("Enter initial amount, period and rate of interest: ");
    scanf("%f %f %f", &p, &n, &r);
    simple = p + p*n*r/100;
    comp = p * pow(1+r/100, n);
    printf("Final amount with Simple interest is %.2f\n", simple);
    printf("Final amount with Compound interest is %.2f\n", comp);
    printf("Difference is %.2f\n", comp - simple);
}
