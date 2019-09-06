#include <stdio.h>

int main()
{
    int reverse_me(int);
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("The reversed no is %d\n", reverse_me(n));
}
int reverse_me(int n)
{
    int rev = 0;
    while(n)
    {
        short dig = n%10;
        rev = rev*10+dig;
        n = n/10;
    }
    return rev;
}
