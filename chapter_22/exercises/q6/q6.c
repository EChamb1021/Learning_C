/*
  Write a program that displays the contents of a file as bytes and as characters
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define INC 10

int main(int argc, char *argv[]){

  FILE *fp;
  char ch;
  int i;
  unsigned char line[INC];
  unsigned long long int offset = 0, bytes_read;

  //Throw error if no filename provided
  if(argc != 2){
    fprintf(stderr, "Usage: q6 [filename]");
    exit(EXIT_FAILURE);
  }

  //Throw error if file cannot be opened
  if((fp = fopen(argv[1], "rb")) == NULL){
    fprintf(stderr, "Error: cannot open file.");
    exit(EXIT_FAILURE);
  }

  //print headers
  printf("Offset              Bytes              Characters\n");
  printf("------  -----------------------------  ----------\n");
  
  //Read line of characters from file
  while((bytes_read = fread(line, sizeof(unsigned char), INC, fp)) > 0){

    //Print offset
    printf("%6lld  ", offset);

    //print each line of bytes and pad last line with spaces
    for(i = 0; i < INC; i++){
      if(i >= bytes_read){
        printf("   ");
      }
      else{
        printf("%-3.2X", line[i]);
      }
    }

    printf(" ");

    //print file characters if they are printable, otherwise print '.'
    for(i = 0; i < bytes_read; i++){
      printf("%c", isprint(line[i]) ? line[i] : '.');
    }
    
    printf("\n");
    offset += INC;

  } 
  
  fclose(fp);
  exit(EXIT_SUCCESS);
}