#include <stdio.h>
float power(float x, int n)
{
    if(n==0)return 1;
    if(n > 0)return x*power(x, n-1);
    return power(x, n+1)/x;
}
int main()
{
    float x;
    int n;
    printf("Enter x and n: ");
    scanf("%f %d", &x, &n);
    printf("Answer = %f\n", power(x, n));
}
