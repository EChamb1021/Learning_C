/*
Modify programming project 11 from chapter 5 so that it uses arrays pointing to strings
rather than switch statements
*/

/*
Write a program that asks for a two digit number, then prints the english word for that number
*/

#include <stdio.h>

const char *TENS[] = {"", "", "Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

const char *ONES[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

const char *TEENS[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

int main(void){

    int first_digit, second_digit;

    printf("Enter a two digit number: ");
    scanf("%1d%1d", &first_digit, &second_digit);

    printf("English word: ");

    if(first_digit == 1){
        printf("%s\n", TEENS[second_digit]);
    }
    else{
        printf("%s %s\n", TENS[first_digit], ONES[second_digit]);
    }

    return 0;
}