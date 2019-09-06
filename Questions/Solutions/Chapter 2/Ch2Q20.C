#include <stdio.h>
int main()
{
    int x = 10, y = 20;
    printf("x = %d\ty = %d\n", x, y);
    x = x+y;
    y = x-y;
    x = x-y;
    printf("x = %d\ty = %d\n", x, y);
}
