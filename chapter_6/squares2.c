/* Prints a table of squares using a for loop */

#include <stdio.h>

int main(void){

    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in the table: ");
    scanf("%d", &n);

    i = 1;

    for(i = 0; i <= n; i++){
        printf("%10d%10d\n", i, i * i);
    }

    return 0;

}