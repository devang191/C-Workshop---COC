#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, k;
    for(i = 1; i <= 4; i++)
        {for(k = 1; k <= 5-i; k++)
             printf("  ");
         for(j = 1; j <= i; j++)
             printf("%c ", j+64);
         for(k = i-1; k >= 1; k--)
             printf("%c ", k+64);
         printf("\n");
        }
end:;
}
