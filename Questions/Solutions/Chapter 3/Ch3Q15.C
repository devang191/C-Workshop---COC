#include <stdio.h>

int main()
{
    int calls;
    float bill;
    printf("Enter number of calls: ");
    scanf("%d", &calls);
    if(calls <= 100)
        bill = 200;
    else if(calls <= 150)
            bill = 200 + (calls-100)*0.60;
         else if(calls <= 200)
                 bill = 230 + (calls-150)*0.50;
              else bill = 255 + (calls-200)*0.40;
    printf("Bill for %d calls is Rs .2f\n", calls, bill);
}
