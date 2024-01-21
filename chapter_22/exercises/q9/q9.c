/*
 Write a program that merges two files containing part records stored by the inventory.c program
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_FILENAME_LENGTH 200
#define NAME_LEN 25
#define MAX_PARTS 250

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
} inventory[MAX_PARTS];

int num_parts = 0;

void read_db(char file[]);

int main(int argc, char *argv[]){

  if(argc != 4){
    printf("Usage: q9 [file_1] [file_2] [output_file]\n");
    exit(EXIT_FAILURE);
  }

  printf("%s\n%s\n%s\n", argv[1], argv[2], argv[3]);
  return 0;
}

void read_db(char file[])
{
    FILE *fp;
    char filename[FILENAME_MAX];

    if ((fp = fopen(filename, "rb")) == NULL)
    {
        fprintf(stderr, "Error: file %s cannot be read\n", filename);
        return;
    }

    num_parts = fread(inventory, sizeof(struct part), MAX_PARTS, fp);
    
    fclose(fp);

    return;
}