/*
Write a program that computes a caesar cipher
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILENAME_LENGTH 80

//a = 97
//z = 122
//A = 65
//Z = 90

int main(void){

    FILE *in_file;
    FILE *out_file;

    char in_file_name[MAX_FILENAME_LENGTH];
    char out_file_name[MAX_FILENAME_LENGTH];
    char ch;
    int n;
    int index = 0;

    printf("Enter the name of the file to be encrypted: ");

    ch = getchar();

    while(ch != '\n'){
        in_file_name[index] = ch;
        out_file_name[index] = ch;
        ch = getchar();
        index++;
    }

    in_file_name[index] = '\0';
    out_file_name[index] = '\0';

    strcat(out_file_name, ".enc");

    if((in_file = fopen(in_file_name, "rb")) == NULL){
      fprintf(stderr, "Error: input file cannot be opened.\n");
      exit(EXIT_FAILURE);
    }

    printf("Enter shift amount: ");
    scanf("%d", &n);

    if((out_file = fopen(out_file_name, "wb")) == NULL){
      fprintf(stderr, "Error: output file cannot be opened.\n");
      exit(EXIT_FAILURE);
    }

    while((ch = getc(in_file)) != EOF){

        //lower case letters
        if((int) ch >= (int) 'a' && (int) ch <= (int) 'z'){

            if((int) ch + n > (int) 'z'){
              fprintf(out_file, "%c", (char) (((ch - 'a') + n) % 26 + 'a'));
            }
            else{
              fprintf(out_file, "%c", (char) ((int) ch + n));
            }

        }

        //Upper case letters
        if((int) ch >= (int) 'A' && (int) ch <= (int) 'Z'){

            if((int) ch + n > (int) 'Z'){
              fprintf(out_file, "%c", (char) (((ch - 'A') + n) % 26 + 'A'));
            }
            else{
              fprintf(out_file, "%c", (char) ((int) ch + n));
            }

        }

    }

    fclose(in_file);
    fclose(out_file);
    
    return 0;

}