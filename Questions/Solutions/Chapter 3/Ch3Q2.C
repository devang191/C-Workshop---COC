#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two unequal integers: ");
    scanf("%d %d", &a, &b);
    if(a > b)
        printf("Greater No is %d\n", a);
    else printf("Greater No is %d\n", b);
}
