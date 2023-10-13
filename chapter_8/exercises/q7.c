/*
Write a program that takes a 5x5 array of integers and prints the row and column sums
*/

#include <stdio.h>

int main(void){

    int numbers[5][5];
    int row_totals[5];
    int column_totals[5];

    //Read integers
    for(int i = 0; i < 5; i++){
        printf("Enter row %d: ", i + 1);
        for(int j = 0; j < 5; j++){
            scanf("%d", &numbers[i][j]);
        }
    }

    int row_sum = 0;
    int column_sum = 0;

    //Calculate totals
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            row_sum += numbers[i][j];
            column_sum += numbers[j][i];
        }
        row_totals[i] = row_sum;
        column_totals[i] = column_sum;
        row_sum = 0;
        column_sum = 0;
    }

    //print row totals
    printf("Row totals: ");

    for(int i = 0; i < 5; i++){
        printf("%d ", row_totals[i]);
    }

    printf("\n");

    //print column totals
    printf("Column totals: ");

    for(int i = 0; i < 5; i++){
        printf("%d ", column_totals[i]);
    }

    printf("\n");  

    return 0;

}