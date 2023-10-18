/* Write a program that prompts the user for a number and displays the number as a seven segment display
using characters */

#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10

//Prototypes
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

//External variables
char digits[3][MAX_DIGITS * 4];
char segments[MAX_DIGITS][12] = {
    {' ','_',' ',' ',     //0
     '|',' ','|',' ',
     '|','_','|',' ',},
    {' ',' ',' ',' ',     //1
     ' ',' ','|',' ',
     ' ',' ','|',' ',},
    {' ','_',' ',' ',     //2
     ' ','_','|',' ',
     '|','_',' ',' ',},
    {' ','_',' ',' ',     //3
     ' ','_','|',' ',
     ' ','_','|',' ',},
    {' ',' ',' ',' ',     //4
     '|','_','|',' ',
     ' ',' ','|',' ',},
    {' ','_',' ',' ',     //5
     '|','_',' ',' ',
     ' ','_','|',' ',},
    {' ',' ',' ',' ',     //6
     '|','_',' ',' ',
     '|','_','|',' ',},
    {' ','_',' ',' ',     //7
     ' ',' ','|',' ',
     ' ',' ','|',' ',},
    {' ','_',' ',' ',     //8
     '|','_','|',' ',
     '|','_','|',' ',},
    {' ','_',' ',' ',     //9
     '|','_','|',' ',
     ' ',' ','|',' ',},
    };
    



int main(void){

    int position = 0;
    char ch;

    clear_digits_array();

    printf("Enter a number: ");
    ch = getchar();
    
    while(ch != '\n'){

        if(isdigit(ch)){

            if(position == (MAX_DIGITS - 1) * 4){
                break;
            }

            process_digit((int) ch - 48, position);
            position += 4;
        }

        ch = getchar();

    }

    print_digits_array();

    printf("\n");

    return 0;
}

void process_digit(int digit, int position){

    int segment = 0;

    for(int i = 0; i < 3; i++){
        for(int j = position; j < position + 4; j++){
            digits[i][j] = segments[digit][segment];
            segment++;
        }
    }

}

void clear_digits_array(void){

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < MAX_DIGITS * 4; j++){
            digits[i][j] = ' ';
        }
    }

}

void print_digits_array(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < MAX_DIGITS * 4; j++){
            printf("%c", digits[i][j]);
        } 
        printf("\n");
    }
}