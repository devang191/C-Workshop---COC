#include <stdio.h>
int main()
{
    int i, n, sum;
    printf("Enter the natural number: ");
    scanf("%d", &n);
    sum = 0;
    for(i = 1; i <= n; i++)
        sum += i;
    printf("Sum = %d\n", sum);
}
