#include <stdio.h>
void main()
{
    int oddsum(int);
    int n;
    printf("Enter an odd integer: ");
    scanf("%d", &n);
    printf("Sum of odd integers up to %d is %d\n", n, oddsum(n));
}

int oddsum(int n)
{
    if(n==1)return 1;
    return n + oddsum(n-2);
}
