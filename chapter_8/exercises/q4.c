/*
Example program that reverses a series of numbers using sizeof for the array length
*/

#include <stdio.h>


#define LENGTH (int) (sizeof(a) / sizeof(a[0]))

int main(void){

    int i;
    int N;

    printf("How many numbers do you want to reverse?: ");
    scanf("%d", &N);

    int a[N];

    printf("Enter %d numbers: ", N);

    for(i = 0; i < LENGTH; i++){
        scanf("%d", &a[i]);
    }

    printf("In reverse order:");

    for(i = LENGTH - 1; i >= 0; i--){
        printf(" %d", a[i]);
    }

    printf("\n");

    return 0;

}