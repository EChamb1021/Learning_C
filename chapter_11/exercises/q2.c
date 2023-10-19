/*
Write a program that accepts a 24h time and returns the closest flight

Modified to use function:
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);
*/

#include <stdio.h>

#define NUM_TIMES 8

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void){

	//HINT: Convert times to minutes since midnight

	int hours, minutes, minutes_since_midnight;
	int departure_time, arrival_time;

	printf("Enter time in 24h: ");
	scanf("%d:%d", &hours, &minutes);

	minutes_since_midnight = (hours * 60) + minutes;

    find_closest_flight(minutes_since_midnight, &departure_time, &arrival_time);

	printf("Closest Departure time is %d:%02d, arriving at %d:%02d.\n",
	departure_time / 60, departure_time % 60,
	arrival_time / 60, arrival_time % 60);

	return 0;

}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time){

	int diff, min = 1440;

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

	for(int i = 0; i < NUM_TIMES; i++){

        diff = desired_time - departure_times[i];
        diff = diff < 0 ? diff * -1 : diff;

        if(diff < min){
            min = diff;
            *departure_time = departure_times[i];
			*arrival_time = arrival_times[i];
        }

    }

}
