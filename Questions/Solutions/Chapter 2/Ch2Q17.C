#include <stdio.h>
int main()
{
    int no;
    short d1, d2, d3;
    printf("Enter a three digit integer: ");
    scanf("%d", &no);
    d1 = no / 100;
    d2 = no /10 % 10;
    d3 = no % 10;
    printf("Digit at hundred's place = %hd\n", d1);
    printf("Digit at ten's place = %hd\n", d2);
    printf("Digit at unit's place = %hd\n", d3);
}
