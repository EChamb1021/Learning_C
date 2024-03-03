/*

Write a program that calculates the roots of a quadratic

*/

#include <stdio.h>
#include <math.h>

int main(void){

  double a, b, c, discriminant, root_1, root_2;

  printf("Enter a value: ");
  scanf("%lf", &a);
  printf("Enter b value: ");
  scanf("%lf", &b);
  printf("Enter c value: ");
  scanf("%lf", &c);

  discriminant = pow(b, 2) - (4*a*c);

  if(discriminant < 0){
    printf("The roots of this quadratic are complex.\n");
  }
  else{
    root_1 = ((b * -1) + sqrt(discriminant))/(2*a);
    root_2 = ((b * -1) - sqrt(discriminant))/(2*a);
    printf("roots: %.2f, %.2f\n", root_1, root_2);
  }

  return 0;
}