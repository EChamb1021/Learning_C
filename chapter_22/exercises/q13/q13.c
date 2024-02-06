/*
Write a program that accepts a 24h time and returns the closest flight

Updated to read flight times from a file
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	//HINT: Convert times to minutes since midnight

  FILE *fp;

  if((fp = fopen("flights.dat", "rb")) == NULL){
    fprintf(stderr, "Error: flight file cannot be read.\n");
    exit(EXIT_FAILURE);
  }

	int hours, minutes, minutes_since_midnight, diff;
	int depart_hour, depart_min, arrive_hour, arrive_min;
  int closest_depart_hour, closest_depart_min, closest_arrive_hour, closest_arrive_min;
	int min = 1440;

	printf("Enter time in 24h: ");
	scanf("%d:%d", &hours, &minutes);

  minutes_since_midnight = (hours * 60) + minutes;

  while((fscanf(fp, "%d:%d %d:%d", 
  &depart_hour, &depart_min, &arrive_hour, &arrive_min
  )) != EOF){

    diff = minutes_since_midnight - (depart_hour * 60 + depart_min);

    if(diff < 0){
      diff *= -1;
    }

    if(diff < min){
		  min = diff;
      closest_arrive_hour = arrive_hour;
      closest_arrive_min = arrive_min;
      closest_depart_hour = depart_hour;
      closest_depart_min = depart_min;
	  }
  }


	printf("Closest Departure time is %d:%02d, arriving at %d:%02d.\n", 
  closest_depart_hour, closest_depart_min, closest_arrive_hour, closest_arrive_min);

  fclose(fp);

	return 0;

}
