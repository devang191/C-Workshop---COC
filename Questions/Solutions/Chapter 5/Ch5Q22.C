#include <stdio.h>
#include <math.h>
int main()
{
    float sumfun(float, int);
    int n;
    float x;
    printf("Enter x and n:");
    scanf("%f %d", &x, &n);
    printf("Answer = %f\n", sumfun(x, n));
}
float sumfun(float x, int n)
{
    int i;
    float s = 0;
    for(i = 1; i <= n; i+=3)
        s = s + pow(x,i)/i;
    return s;
}
