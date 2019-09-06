#include <stdio.h>

void binary(int no)
{
if (no==0)return;
binary(no/2);
printf("%d", no%2);
}

int main()
{
int no;
printf("Enter a positive integer: ");
scanf("%d", &no);
printf("Binary equivalent = ");
binary(no);
}
