/* Design a union that makes it possible to view a 32 bit value as either a float or the structure described in exercise 14 
   which is as follows:

   When stored according to the IEEE standard, a float value consists of a 1 bit sign (leftmost significant bit), an 8 bit exponent,
   and a 23 bit fraction, in that order. Bit fields should have a type of unsigned int.

   Write a program that stores 1 in the structure sign field, 128 in the exponent field, and 0 in the fraction field.
   Printing as a float should result in -2.  


*/

#include <stdio.h>

union decimal{
    float value;
    struct float_value{
        unsigned int fraction: 23;
        unsigned int exponent: 8;
        unsigned int sign: 1;
    }field;
};

int main(void){

    union decimal fraction;
    
    fraction.field.sign = 1;
    fraction.field.exponent = 128;
    fraction.field.fraction = 0;

    printf("Printed as a float: %.1f\n", fraction.value);

    return 0;
}