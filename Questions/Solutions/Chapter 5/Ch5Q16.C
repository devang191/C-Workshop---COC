#include <stdio.h>

int main()
{
    long fact(int);
    int n, r;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("The Binomial Coefficients are:\n");
    for(r = 0; r <= n; r++)
        printf("%d\t", fact(n)/fact(r)/fact(n-r));
}
long fact(int n)
{
    int i;
    long f = 1;
    for(i = 1; i <= n; i++)
        f = f*i;
    return f;
}
