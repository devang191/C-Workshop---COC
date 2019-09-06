#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two unequal integers: ");
    scanf("%d %d", &a, &b);
    if(a > b)
        printf("The numbers in decreasing order are %d, %d\n", a, b);
    else printf("The numbers in decreasing order are %d, %d\n", b, a);
}
