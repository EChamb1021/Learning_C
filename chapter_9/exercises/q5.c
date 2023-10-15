/*
Write a program that prints an nxn magic square of numbers

updated to use functions
*/

#include <stdio.h>

void create_magic_square(int n, int magic_square[99][99]);
void print_magic_square(int n, int magic_square[99][99]);

int main(void){

    int magic_square[99][99] = {0};
    int n;

    printf("This program prints a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");

    scanf("%d", &n);

    create_magic_square(n, magic_square);

    print_magic_square(n, magic_square);

    return 0;

}

void create_magic_square(int n, int magic_square[99][99]){

    int row_ptr = 0;
    int col_ptr;
    int next_row_ptr;
    int next_col_ptr;

        col_ptr = n / 2;

    for(int i = 1; i < (n*n) + 1; i++){

        magic_square[row_ptr][col_ptr] = i;

        next_row_ptr = row_ptr - 1 < 0 ? n - 1 : row_ptr - 1;
        next_col_ptr = col_ptr + 1 >= n ? 0 : col_ptr + 1;

        if(magic_square[next_row_ptr][next_col_ptr] != 0){
            row_ptr = row_ptr + 1 >= n ? 0 : row_ptr + 1;
        }
        else{
            row_ptr = next_row_ptr;
            col_ptr = next_col_ptr;
        }

    }

}

void print_magic_square(int n, int magic_square[99][99]){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%-4d", magic_square[i][j]);
        }
        printf("\n");
    }

}

