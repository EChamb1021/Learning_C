/*
Write a program that generates a "random walk" across a 10x10 array

Using a function to generate the walk and a function to print the array
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10

void generate_random_walk(char walk[ARRAY_SIZE][ARRAY_SIZE]);
void print_array(char walk[ARRAY_SIZE][ARRAY_SIZE]);

int main(void){

    char array[ARRAY_SIZE][ARRAY_SIZE];

    generate_random_walk(array);
    
    print_array(array);

    return 0;

}

void generate_random_walk(char walk[ARRAY_SIZE][ARRAY_SIZE]){

    for(int i = 0; i < ARRAY_SIZE; i++){
        for(int j = 0; j < ARRAY_SIZE; j++){
            walk[i][j] = '.';
        }
    }

        //First letter on random walk (ASCII code for A)
    int letter = 65;
    
    //row and column indices
    int row = 0;
    int column = 0;

    //random number
    int step;

    //Array to track which directions have been tried
    bool directions_tried[4] = {false};

    //Keep track of attempts
    int attempts = 1;

    //Initialize random number generator
    srand((unsigned) time(NULL));

    //Start with A in position [0][0]
    walk[row][column] = (char) letter;

    while(attempts <= 4){

        step = rand() % 4;
        
        if(directions_tried[step]){
            continue;
        }

        switch(step){
            case 0:
                if((row - 1) < 0 || walk[row - 1][column] != '.'){
                    attempts += 1;
                    directions_tried[step] = true;
                    continue;
                }
                else{
                    walk[row - 1][column] = (char) (letter + 1);
                    row -= 1;
                    letter += 1;
                    attempts = 1;
                }
                break;
            
            case 1: 
                if((column + 1) > (ARRAY_SIZE - 1) || walk[row][column + 1] != '.'){
                    attempts += 1;
                    directions_tried[step] = true;
                    continue;
                }
                else{
                    walk[row][column + 1] = (char) (letter + 1);
                    column += 1;
                    letter += 1;
                    attempts = 1;
                }
                break;
            
            case 2:
                if((row + 1) > (ARRAY_SIZE - 1) || walk[row + 1][column] != '.'){
                    attempts += 1;
                    directions_tried[step] = true;
                    continue;
                }
                else{
                    walk[row + 1][column] = (char) (letter + 1);
                    row += 1;
                    letter += 1;
                    attempts = 1;
                }
                break;

            case 3:
                if((column - 1) < 0 || walk[row][column - 1] != '.'){
                    attempts += 1;
                    directions_tried[step] = true;
                    continue;
                }
                else{
                    walk[row][column - 1] = (char) (letter + 1);
                    column -= 1;
                    letter += 1;
                    attempts = 1;
                }
                break;
        }

        //Reset the array
        for(int i = 0; i < 4; i++){
            directions_tried[i] = false;
        }

        //Check if last letter has been reached
        if((char) letter == 'Z'){  
            break;
        }

    }
    

}

void print_array(char walk[ARRAY_SIZE][ARRAY_SIZE]){

    //Print the final array
    for(int i = 0; i < ARRAY_SIZE; i++){
        for(int j = 0; j < ARRAY_SIZE; j++){
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }

}