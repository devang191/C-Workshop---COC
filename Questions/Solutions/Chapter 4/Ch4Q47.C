#include <stdio.h>

int main()
{
    int no, i, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &no);
    int temp = no;
    while(no)
        {
            count++;
            no = no / 10;
        }
    no = temp;
    int sum = 0;
    while(no)
        {
            short dig = no % 10;
            int term = 1;
            for(i = 1; i <= count; i++)
                term *= dig;
            sum = sum + term;
            no = no / 10;
        }
    if(sum==temp)
       printf("Armstrong No\n");
    else printf("Not an Armstrong No\n");
}
