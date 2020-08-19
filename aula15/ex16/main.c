#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   double a, b, c, delta = 0, x1 = 0, x2 = 0;

   printf("Informe o coeficiente A: ");
   scanf("%lf", &a);

   printf("Informe o coeficiente B: ");
   scanf("%lf", &b);

   printf("Informe o coeficiente C: ");
   scanf("%lf", &c);

   delta = pow(b, 2 ) - (4 * a * c);

   if(a == 0 || delta < 0){
        printf("Equacao nao tem raizes reias");
   }else{
        x1 = (-b - sqrt(delta)) / (2 * a );
        x2 = (-b + sqrt(delta)) / (2 * a );
        printf("X1 = %.4lf\n", x1);
        printf("X2 = %.4lf\n", x2);
   }
   return 0;
}
