#include <stdio.h>
#include <math.h>
int main()
{
    int no, rev = 0;
    printf("Enter an integer: ");
    scanf("%d", &no);
    while(no)
        {
            short dig = no % 10;
            rev = rev*10 + dig;
            no = no / 10;
        }
    printf("Reversed number = %d\n", rev);
}
