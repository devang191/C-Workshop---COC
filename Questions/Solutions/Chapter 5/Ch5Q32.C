#include <stdio.h>

long binary(int no)
{
if (no==0)return 0;
return binary(no/2)*10 + no%2;
}

int main()
{
int no;
printf("Enter a positive integer: ");
scanf("%d", &no);
printf("Binary equivalent = %ld\n", binary(no));
}
