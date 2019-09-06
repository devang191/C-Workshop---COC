#include <stdio.h>
void main()
{
    int fact(int);
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, fact(n));
}

int fact(int n)
{
    if(n==0)return 1;
    return n * fact(n-1);
}
