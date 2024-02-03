/* Write a program that reads a date from the command line in one of the following forms:
    9-13-2010
    9/13/2010

  And dispays it as 

    September 13, 2010

*/

#include <stdio.h>
#include <stdlib.h>

const char *months[] = {
  "January",
  "February",
  "March",
  "April",
  "May",
  "June",
  "July",
  "August",
  "September",
  "October",
  "November",
  "December"
};

int main(int argc, char *argv[]){

  int values_read;

  int month;
  int day;
  int year;

  values_read = sscanf(argv[1],"%d%*[-/]%d%*[-/]%d", &month, &day, &year);

  if(values_read != 3){
    printf("Error: invalid format.\n");
    exit(EXIT_FAILURE);
  }

  printf("%s %d, %d\n", months[month-1], day, year);

  return 0;
}