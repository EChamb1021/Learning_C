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
int num_sort(const void *p1, const void *p2);
void dump(char filename[FILENAME_MAX]);
void consistency_check(struct part new_inventory[MAX_PARTS]);

int main(int argc, char *argv[]){

  if(argc != 4){
    printf("Usage: q9 [file_1] [file_2] [output_file]\n");
    exit(EXIT_FAILURE);
  }

  //Read input files
  read_db(argv[1]);
  read_db(argv[2]);

  //sort part database
  qsort(inventory, num_parts, sizeof(struct part), num_sort);

  //consistency check
  struct part new_inventory[MAX_PARTS];

  consistency_check(new_inventory);

  //Save to output file
  dump(argv[3]);

  return 0;
}

void read_db(char filename[FILENAME_MAX])
{
    FILE *fp;

    if ((fp = fopen(filename, "rb")) == NULL)
    {
        fprintf(stderr, "Error: file %s cannot be read\n", filename);
        return;
    }

    fread(&inventory[num_parts], sizeof(struct part), MAX_PARTS, fp);
    num_parts++;

    fclose(fp);

    return;
}

int num_sort(const void *p1, const void *p2){

  struct part *cp1 = (struct part *) p1;
  struct part *cp2 = (struct part *) p2;

  if(cp1->number < cp2->number){
    return -1;
  }
  else if (cp1->number > cp2->number){
    return 1;
  }
  else{
    return 0;
  }
  
}

void dump(char filename[FILENAME_MAX])
{
    FILE *fp;

    if ((fp = fopen(filename, "wb")) == NULL)
    {
        fprintf(stderr, "Error: file %s cannot be written\n", filename);
        return;
    }
    
    fwrite(inventory, sizeof(struct part), num_parts, fp);
    fclose(fp);
    return;
}

void consistency_check(struct part new_inventory[MAX_PARTS]){

  struct part current_part;
  int new_index = 0;

  for(int i = 0; i < num_parts; i++){
    current_part = inventory[i];
    for(int j = 0; j < num_parts; j++){
      if(current_part.number == inventory[j].number){
        if(current_part.name != inventory[j].name){
          fprintf(stderr, "Error: Parts cannot have same number and different names.\n");
          exit(EXIT_FAILURE);
        }
        else{
          new_inventory[new_index] = current_part;
          new_index++;
        }
      }
    }
  }

}