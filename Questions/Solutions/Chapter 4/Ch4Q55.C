#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j, k = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= 5; i++)
        {for(j = 1; j <= i; j++)
             {printf("%d\t", k++);
              if(k>n)goto end;
             }
         printf("\n");
        }
end:;
}
