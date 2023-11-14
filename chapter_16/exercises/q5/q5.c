/*
Write a program that accepts a 24h time and returns the closest flight
*/

#include <stdio.h>

struct flight {
    int depart_time;
    int arrival_time;
};

const struct flight flight_times[] = {
    {(8 * 60), (10*60) + 16},         //8:00 -> 10:16
    {(9 * 60) + 43, (11 * 60) + 52},  //9:43 -> 11:52
    {(11 * 60) + 19, (13 * 60) + 31}, //11:19 -> 13:31
    {(12 * 60) + 47, (15 * 60)},      //12:47 -> 15:00
    {(14 * 60), (16 * 60) + 8},       //14:00 -> 16:08
    {(15 * 60) + 45, (17 * 60) + 55}, //15:45 -> 17:55
    {(19 * 60), (21 * 60) + 20},      //19:00 -> 21:20
    {(21 * 60) + 45, (23 * 60) + 58}  //21:45 -> 23:58
};

int main(void){

	//HINT: Convert times to minutes since midnight

	int hours, minutes, minutes_since_midnight, diff;
	int min = 1440;
    int flight; 

	printf("Enter time in 24h: ");
	scanf("%d:%d", &hours, &minutes);

	minutes_since_midnight = (hours * 60) + minutes;

    for(int i = 0; i < 7; i++){
        diff = minutes_since_midnight - flight_times[i].depart_time;
        diff = diff < 0 ? diff * -1 : diff;

        if (diff < min){
            min = diff;
            flight = i;
        }
    }

    

	printf("Closest Departure time is %d:%02d, arriving at %d:%02d.\n", 
    flight_times[flight].depart_time / 60, 
    flight_times[flight].depart_time % 60, 
    flight_times[flight].arrival_time / 60, 
    flight_times[flight].arrival_time % 60);

	return 0;

}
