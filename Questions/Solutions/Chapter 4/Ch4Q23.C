#include <stdio.h>
int main()
{
    char ch;
    printf("Char\tASCII\tChar\tASCII\n\n");
    for(ch = 'A'; ch <= 'Z'; ch++)
        printf("%c\t%d\t%c\t%d\n", ch, ch, ch+32, ch+32);
}
