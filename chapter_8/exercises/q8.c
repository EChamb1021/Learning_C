/*
Write a program that takes in 5 students quiz grades and calculates:
- total score and average score for each student
- average score, high score, and low score for each quiz
*/

#include <stdio.h>

#define NUM_GRADES 5

int main(void){

    int grades[NUM_GRADES][NUM_GRADES];
    int student_totals[NUM_GRADES];
    int student_averages[NUM_GRADES];
    int quiz_totals[NUM_GRADES];
    int quiz_averages[NUM_GRADES];
    int quiz_lows[NUM_GRADES];
    int quiz_highs[NUM_GRADES];

    //Read quiz grades
    for(int i = 0; i < NUM_GRADES; i++){
        printf("Enter grades for student %d: ", i + 1);
        for(int j = 0; j < NUM_GRADES; j++){
            scanf("%d", &grades[i][j]);
        }
    }

    //Calculate values
    int student_sum = 0;
    int quiz_sum = 0;

    int quiz_low = 100;
    int quiz_high = 0;

    for(int i = 0; i < NUM_GRADES; i++){
        for(int j = 0; j < NUM_GRADES; j++){
            student_sum += grades[i][j];
            quiz_sum += grades[j][i];

            if(grades[j][i] < quiz_low){
                quiz_low = grades[j][i];
            }
            if(grades[j][i] > quiz_high){
                quiz_high = grades[j][i];
            }
        }
        student_totals[i] = student_sum;
        student_averages[i] = student_sum / NUM_GRADES;

        quiz_totals[i] = quiz_sum;
        quiz_averages[i] = quiz_sum / NUM_GRADES;

        quiz_lows[i] = quiz_low;
        quiz_highs[i] = quiz_high;
        
        student_sum = 0;
        quiz_sum = 0;

        quiz_low = 100;
        quiz_high = 0;
    }

    //Output values
    printf("\nStudent Results\n");
    printf("---------------\n");

    for(int i = 0; i < NUM_GRADES; i++){
        printf("Student %d\n", i+1);
        printf("\tTotal: %d\n", student_totals[i]);
        printf("\tAverage: %d\n", student_averages[i]);
    }

    printf("\nQuiz Results\n");
    printf("------------\n");

    for(int i = 0; i < NUM_GRADES; i++){
        printf("Quiz %d\n", i+1);
        printf("\tAverage: %d\n", quiz_averages[i]);
        printf("\tHigh: %d\n", quiz_highs[i]);
        printf("\tLow: %d\n", quiz_lows[i]);
    }

    printf("\n");  

    return 0;

}