/*
Modify programming project 8 from chapter 5 (closest flight time) to store the departure and arrival times 
in arrays
*/

/*
Write a program that accepts a 24h time and returns the closest flight
*/

#include <stdio.h>

#define NUM_TIMES 8

int main(void){

	//HINT: Convert times to minutes since midnight

	int hours, minutes, minutes_since_midnight, diff, min_index;
	int min = 1440;

    int departure_times[NUM_TIMES] = {
        (8 * 60) + 00,
        (9 * 60) + 43,
        (11 * 60) + 19,
        (12 * 60) + 47,
        (14 * 60) + 00,
        (15 * 60) + 45, 
        (19 * 60) + 00,
        (21 * 60) + 45
    };

    int arrival_times[NUM_TIMES] = {
        (10 * 60) + 16,
        (11 * 60) + 52,
        (13 * 60) + 31,
        (15 * 60) + 00,
        (16 * 60) + 8,
        (17 * 60) + 55,
        (21 * 60) + 20,
        (23 * 60) + 58 
    };

	printf("Enter time in 24h: ");
	scanf("%d:%d", &hours, &minutes);

	minutes_since_midnight = (hours * 60) + minutes;

    for(int i = 0; i < NUM_TIMES; i++){

        diff = minutes_since_midnight - departure_times[i];
        diff = diff < 0 ? diff * -1 : diff;

        if(diff < min){
            min = diff;
            min_index = i;
        }

    }

	printf("Closest Departure time is %d:%02d, arriving at %d:%02d.\n", 
    departure_times[min_index] / 60, 
    departure_times[min_index] % 60,
    arrival_times[min_index] / 60,
    arrival_times[min_index] % 60);

	return 0;

}
