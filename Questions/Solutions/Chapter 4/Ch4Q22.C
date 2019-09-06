#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    long int fact = 1;
    for(i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial of %d is %ld\n", n, fact);
}
