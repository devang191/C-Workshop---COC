#include <stdio.h>
int main()
{
    short int i, marks, firstclass = 0;
    for(i = 1; i <= 5; i++)
    {
        printf("Enter Marks: ");
        scanf("%hd", &marks);
        if(marks >= 60)
           firstclass++;
    }
    printf("Number of Firstclass students are %hd\n", firstclass);
}
