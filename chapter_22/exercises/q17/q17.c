/*
  Write ae program that reads phone numbers from a file and displays them in a standard format:

  (###) ###-####

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include <ctype.h>

int main(int argc, char *argv[]){

  FILE *fp;
  char first_group[3+1], second_group[3+1], third_group[4+1];
  char ch;
  int i = 0;
  bool is_finished = false;
  

  if((fp = fopen(argv[1], "rb")) == NULL){
    fprintf(stderr, "Can't open %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  while((ch = getc(fp)) != EOF){
    if(isdigit(ch) && i < 3){
      first_group[i++] = ch;
    }

    if(i == 3){
      first_group[i++] = '\0';
    }
    else if(isdigit(ch) && i > 3 && i < 7){
      second_group[i++ - 4] = ch;
    }

    if(i == 7){
      second_group[i++ - 4] = '\0';
    }
    else if(isdigit(ch) && i > 7 && i < 12){
      third_group[i++ - 8] = ch;
    }
    
    if(i == 12){
      third_group[i++ - 8] = '\0'; 
      is_finished = true;
    }

    if(is_finished){
      printf("(%s) %s-%s\n", first_group, second_group, third_group);
      i = 0;
      is_finished = false;
    }
  }

  fclose(fp);

  return 0;
}