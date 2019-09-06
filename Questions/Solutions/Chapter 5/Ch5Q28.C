#include <stdio.h>
int gcd(int m, int n)
{
    if(n==0)return m;
    if(m<n)return gcd(n, m);
    return gcd(n, m%n);
}
int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("GCD = %d\n", gcd(a, b));
}
