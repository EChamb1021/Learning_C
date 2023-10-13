/*
Write a program that sorts an array of numbers using selection sort
*/

#include <stdio.h>

//How many numbers the user can enter
#define N 10

//Finds the largest number in the array
int largest_num(int size, int numbers[size]);

//Performs the selection sort algorithm
void selection_sort(int size, int numbers[size]);


int main(void){

    //Array of numbers entered by the user
    int numbers[N];

    printf("Enter a series of numbers: ");

    for(int i = 0; i < N; i++){
        scanf("%d", &numbers[i]);
    }


    selection_sort(N, numbers);
    
    
    //Output
    printf("Sorted: ");
    
    for(int i = 0; i < N; i++){
        printf("%d ", numbers[i]);
    }
    
    printf("\n");
    
    return 0;
}

int largest_num(int size, int numbers[size]){

    int largest = numbers[0];

    for(int i = 1; i < size; i++){
        if(numbers[i] >= largest){
            largest = numbers[i];
        }
    }

    return largest;
}

void selection_sort(int size, int numbers[size]){

    //Base case for recursion (ends when final number is reached)
    if(size == 1){
        return;
    }

    int largest = largest_num(size, numbers);

    //Used to track the index of the largest number in the current array
    int largest_index = size;

    //All numbers after the largest are shifted one position to the left
    for(int i = 0; i < size; i++){
        if(numbers[i] == largest){
            largest_index = i;
        }

        if(i > largest_index){
            numbers[i - 1] = numbers[i];
        }
    }

    //The largest element is moved to the end of the array
    numbers[size - 1] = largest;

    //Recursive call on the rest of the array
    selection_sort(size - 1, numbers);

}