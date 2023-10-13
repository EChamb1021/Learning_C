/*
Write a program that uses Newton's method to compute the square root of a positive floating point number
*/

#include <stdio.h>
#include <math.h>

int main(void){

    double x;
    double y_1 = 1.00f;
    double y_2;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    y_2 = (y_1 + (x/y_1)) / 2.00f;

    while(fabs(y_2 - y_1) > (0.00001f * y_2)){
        y_1 = y_2;
        y_2 = (y_1 + (x/y_1)) / 2.00f;

    }

    printf("Square Root: %lf\n", y_2);

    return 0;

}