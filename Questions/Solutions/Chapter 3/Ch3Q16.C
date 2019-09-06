#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;
    float per;
    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    per = (m1+m2+m3+m4+m5)/5.0;
    printf("Percentage scored is %.2f\n", per);
    if(per >= 75)
        printf("Distinction\n");
    else if(per >= 60)
            printf("First Class\n");
         else if(per >= 40)
                 printf("Second Class\n");
              else printf("Fail\n");
}
