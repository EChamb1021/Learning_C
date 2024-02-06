/*
  Write a program that reads integers from a text file and prints the max, min and average

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMS 10000

int compare( const void* a, const void* b);

int main(int argc, char *argv[]){

  FILE *fp;
  int num, count = 0;
  int num_store[MAX_NUMS];

  if((fp = fopen(argv[1], "rb")) == NULL){
    fprintf(stderr, "Can't open %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  while((fscanf(fp, "%d", &num)) != EOF){
    num_store[count++] = num;
  }

  qsort(num_store, count, sizeof(int), compare);

  printf("MAX: %d\n", num_store[count - 1]);
  printf("MIN: %d\n", num_store[0]);
  printf("MEDIAN: %d\n",
   count % 2 == 0 ? 
    (num_store[count/2] + num_store[(count/2)+1])/2
    :
    num_store[(count+1)/2]);

  fclose(fp);

  exit(EXIT_SUCCESS);
}

int compare( const void* a, const void* b)
{
     int int_a = * ( (int*) a );
     int int_b = * ( (int*) b );

     if ( int_a == int_b ) return 0;
     else if ( int_a < int_b ) return -1;
     else return 1;
}

