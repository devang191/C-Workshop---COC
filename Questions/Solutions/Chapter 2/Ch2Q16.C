#include <stdio.h>
int main()
{
    short no, d1, d2, rev;
    printf("Enter a two digit integer: ");
    scanf("%hd", &no);
    d1 = no / 10;
    d2 = no % 10;
    rev = d2*10+d1;
    printf("Reversed no = %hd\n", rev);
}
