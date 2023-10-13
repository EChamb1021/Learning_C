/* Prints a table of squares using an odd method (updated for loop )*/

#include <stdio.h>

int main(void){

    int i, n, odd, square;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in the table: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;
    square = 1;

    for(i = 1; i <= n; i++){
        printf("%10d%10d\n", i, square);
        square += odd;
        odd += 2;
    }

    return 0;

}