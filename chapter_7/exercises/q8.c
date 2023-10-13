/*
Write a program that accepts a 24h time and returns the closest flight
*/

#include <stdio.h>
#include <ctype.h>

int main(void){

	//HINT: Convert times to minutes since midnight

	int hours, minutes, minutes_since_midnight, diff;
	int depart_hour, depart_min, arrive_hour, arrive_min;
	int min = 1440;

    char time_of_day;

    //Format: hour:minute(space?)A|P|AM|PM
	printf("Enter time: ");
	scanf("%d:%d", &hours, &minutes);

    time_of_day = toupper(getchar());

    if(time_of_day == ' '){
        time_of_day = toupper(getchar());
    }

    if(time_of_day == 'P' && hours < 12){
        hours += 12;
    }

    if(time_of_day == 'A' && hours == 12){
        hours = 0;
    }


	minutes_since_midnight = (hours * 60) + minutes;

	//8:00AM departure
	diff = minutes_since_midnight - (8 * 60);

	if(diff < 0){
		diff *= -1;
	}

	if(diff < min){
		min = diff;
		depart_hour = 8;
		depart_min = 0;
		arrive_hour = 10;
		arrive_min = 16;
	}

	//9:43AM departure
	diff = minutes_since_midnight - (9 * 60 + 43);

	if(diff < 0){
		diff *= -1;
	}

	if(diff < min){
		min = diff;
		depart_hour = 9;
		depart_min = 43;
		arrive_hour = 11;
		arrive_min = 52;
	}

	//11:19AM departure
	diff = minutes_since_midnight - (11 * 60 + 19);

	if(diff < 0){
		diff *= -1;
	}

	if(diff < min){
		min = diff;
		depart_hour = 11;
		depart_min = 19;
		arrive_hour = 13;
		arrive_min = 31;
	}

	//12:47PM departure
	diff = minutes_since_midnight - (12 * 60 + 47);

	if(diff < 0){
		diff *= -1;
	}

	if(diff < min){
		min = diff;
		depart_hour = 12;
		depart_min = 47;
		arrive_hour = 15;
		arrive_min = 0;
	}

	//2:00PM departure
	diff = minutes_since_midnight - (14 * 60);

	if(diff < 0){
		diff *= -1;
	}

	if(diff < min){
		min = diff;
		depart_hour = 14;
		depart_min = 0;
		arrive_hour = 16;
		arrive_min = 8;
	}

	//3:45PM departure
	diff = minutes_since_midnight - (15 * 60 + 45);

	if(diff < 0){
		diff *= -1;
	}

	if(diff < min){
		min = diff;
		depart_hour = 15;
		depart_min = 45;
		arrive_hour = 17;
		arrive_min = 55;
	}

	//7:00PM departure
	diff = minutes_since_midnight - (19 * 60);

	if(diff < 0){
		diff *= -1;
	}

	if(diff < min){
		min = diff;
		depart_hour = 19;
		depart_min = 0;
		arrive_hour = 21;
		arrive_min = 20;
	}

	//9:45PM departure
	diff = minutes_since_midnight - (21 * 60 + 45);

	if(diff < 0){
		diff *= -1;
	}

	if(diff < min){
		min = diff;
		depart_hour = 21;
		depart_min = 45;
		arrive_hour = 23;
		arrive_min = 58;
	}

	printf("Closest Departure time is %d:%02d, arriving at %d:%02d.\n", depart_hour, depart_min, arrive_hour, arrive_min);
    
	return 0;

}
