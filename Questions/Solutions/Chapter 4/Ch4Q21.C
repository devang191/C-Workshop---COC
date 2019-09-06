#include <stdio.h>
int main()
{
    int i, sum = 0;
    for(i = 51; i <= 99; i+=2)
        sum += i;
    printf("Sum = %d\n", sum);
}
