#include <stdio.h>

int main()
{
    float centi, faren;
    printf("Enter temp in degree Farenheit: ");
    scanf("%f", &faren);
    centi = (faren-32)*5/9;
    printf("Equivalent temp in degree centigrade is %f\n", centi);
}
