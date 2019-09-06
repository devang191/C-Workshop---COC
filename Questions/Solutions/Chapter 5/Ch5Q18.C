#include <stdio.h>

int main()
{
    short palindrome(int);
    int no;
    printf("Enter n: ");
    scanf("%d", &no);
    if(palindrome(no))
       printf("The no is an palindrome\n");
    else printf("The no is not an palindrome\n");
}
short palindrome(int n)
{
    int rev = 0, n1 = n;
    while(n)
    {
        short dig = n%10;
        rev = rev*10+dig;
        n = n/10;
    }
    return rev==n1;
}
