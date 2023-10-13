/*
Write a program that computes the factorial of a positive integer

a) (short) The largest value of n for which the program prints the correct factorial value is 7
b) (int) The largest value of n for which the program prints the correct factorial value is 12
c) (long) The largest value of n for which the program prints the correct factorial value is 20
d) (long long) The largest value of n for which the program prints the correct factorial value is 20
e) (float) The largest value of n for which the program prints the correct factorial value is 34
f) (double) The largest value of n for which the program prints the correct factorial value is 34
g) (long double) The largest value of n for which the program prints the correct factorial value is 1754
*/

#include <stdio.h>

int main(void){

    long double factorial;
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    factorial = num;

    for(int i = num; i>=2; i--){
        factorial *= i - 1;
    }

    printf("Factorial: %Lf\n", factorial);

    return 0;

}