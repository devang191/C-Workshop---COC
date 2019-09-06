#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, x1, x2;
    printf("Enter co-efficients of a quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b-4*a*c;
    if(d==0)
      {
          printf("Real & Equal Roots\n");
          x1 = x2 = -b/2/a;
          printf("Root 1 = %f\nRoot 2 = %f\n", x1, x2);
      }
    else if(d>0)
           {
               printf("Real & Distinct Roots\n");
               x1 = (-b+sqrt(d))/2/a;
               x2 = (-b-sqrt(d))/2/a;
               printf("Root 1 = %f\nRoot 2 = %f\n", x1, x2);

           }
          else {
                    printf("Imaginary Roots\n");
                    x1 = -b/2/a;
                    x2 = sqrt(-d)/2/a;
                    printf("Root 1 = %f%+fi\nRoot 2 = %f%+fi\n", x1, x2, x1, -x2);
               }
}
