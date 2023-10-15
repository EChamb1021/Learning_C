/*
Write a program that simulates a game of craps
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void){

    bool result;
    int wins = 0;
    int losses = 0;
    char play_again;

    srand((unsigned) time(NULL));

    do{
        printf("\n");
        result = play_game();

        if(result == true){
            printf("You Win!\n");
            wins++;
        }else{
            printf("You lose!\n");
            losses++;
        }

        printf("\nPlay again? ");
        scanf(" %c", &play_again);

    }while(play_again == 'y');

    printf("Wins: %d\tLosses: %d\n", wins, losses);

    return 0;
}

bool play_game(void){

    //First roll
    int roll = roll_dice();
    int point;

    printf("you rolled: %d\n", roll);

    if(roll == 7 || roll == 11){
        return true;
    }else if(roll == 2 || roll == 3 || roll == 12){
        return false;
    }else{
       
        point = roll;
        printf("Your point is %d\n", roll);

        while(true){
            roll = roll_dice();
            printf("you rolled: %d\n", roll);

            if(roll == point){
                return true;
            }
            if(roll == 7){
                return false;
            }
        }
    }
}

int roll_dice(void){

    return ((rand() % 6) + 1) + ((rand() % 6) + 1);
}