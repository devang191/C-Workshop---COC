#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a+b>c&&b+c>a&&c+a>b)
        printf("They form a valid triangle\n");
    else printf("They do not form a valid triangle\n");
}
