/* Prints a table of squares using a for loop */

/* smallest int value of n that causes failure: 46340*/
/* smallest short int value of n that causes failure: 182*/
/* smallest long int value of n that causes failure: 3,037,000,500*/
/*Therefore, number of bits used to store ints on thinkserver is 64*/


#include <stdio.h>

int main(void){

    long i;
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in the table: ");
    scanf("%d", &n);

    i = 1;

    for(i = 0; i <= n; i++){
        printf("%ld%30ld\n", i, i * i);

        if(i * i < 0){
            break;
        }
    }

    return 0;

}