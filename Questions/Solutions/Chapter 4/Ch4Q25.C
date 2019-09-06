#include <stdio.h>
int main()
{
    short yr;
    float amt = 0;
    printf("\nYear\tAmount\n\n");
    for(yr = 1; yr <= 10; yr++)
    {
        amt = amt + 5000;
        amt = amt + 0.1*amt;
        printf("%3hd\t%.2f\n", yr, amt);
    }
}
