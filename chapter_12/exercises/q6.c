/* 
    modify the qsort.c program of section 9.6 so that low, high, and middle are pointers to array elements
    rather than integers.
*/

/*
Sorts an array of integers using the quicksort algorithm
*/

#include <stdio.h>

#define N 10

void quicksort(int *low, int *high);
int *split(int *low, int *high);

int main(void){

    int a[N], *i;

    printf("Enter %d numbers to be sorted: ", N);

    for(i = a; i < a + N; i++){
        scanf("%d", i);
    }

    quicksort(a, i - 1);

    printf("In sorted order: ");

    for(i = a; i < a + N; i++){
        printf("%d ", *i);
    }

    printf("\n");

    return 0;
}

void quicksort(int *low, int *high){

    int *middle;

    if(low >= high){
        return;
    }

    middle = split(low, high);
    quicksort(low, middle - 1);
    quicksort(middle + 1, high);

}

int *split(int *low, int *high){

    int part_element = *low;

    for(;;){
        while(low < high && part_element <= *high){
            high--;
        }
        if(low >= high){
            break;
        }

        *low++ = *high;

        while(low < high && *low <= part_element){
            low++;
        }
        if(low >= high){
            break;
        }

        *high-- = *low;

    }

    *high = part_element;
    return high;

}