/* Prints a table of squares using a for loop (updated)*/



#include <stdio.h>

int main(void){

    long i;
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in the table: ");
    scanf("%d", &n);

    //Clear new line from input stream
    getchar();

    i = 1;

    for(i = 1; i <= n; i++){

        printf("%ld%30ld\n", i, i * i);

        if(i % 24 == 0){
            printf("Press Enter to continue...");
            getchar();    
        }

    }

    return 0;

}