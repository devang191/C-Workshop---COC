#include <stdio.h>

int main()
{
    short prime(int);
    short fibo(int);
    int no;
    printf("Enter an integer: ");
    scanf("%d", &no);
    while(no > 0)
    {
     if(prime(no))
        if(fibo(no))
           printf("The no is Prime and Fibo Number\n");
        else printf("The no is only Prime number\n");
     else if(fibo(no))
           printf("The no is only Fibo Number\n");
        else printf("The no is neither Prime nor Fibo number\n");
     printf("Enter an integer: ");
     scanf("%d", &no);
    }
}
short prime(int n)
{
    int i = 2;
    while(n%i)i++;
    return n==i;
}
short fibo(int n)
{
    int f = 1, s = 1, t = 1;
    while(t<n)
       {
            t = f + s;
            f = s;
            s = t;
       }
    return t==n;
}
