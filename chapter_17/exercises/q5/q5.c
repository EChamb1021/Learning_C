/*
Write a program that sorts a series of words entered by the user
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LEN 20

int read_line(char str[], int n);
int compare_words(const void *p, const void *q);

int main(void){

  //Allocate space for single word, array of words
  char *word = NULL;
  char **words = NULL;
  int i, num_words = 0, word_array_size = 1;

  if((words = malloc(sizeof(char *))) == NULL){
    printf("Error: malloc for words failed.");
    exit(1);
  }

  for(i = 0; ; i++){

    if((word = malloc(sizeof(char) * MAX_WORD_LEN)) == NULL){
      printf("Error: malloc for word failed.");
      exit(1);
    }

    printf("Enter word: ");
    read_line(word, MAX_WORD_LEN);

    //If no word entered, exit
    if(strlen(word) == 0){
      break;
    }

    words[i] = word;

    //If word array is full, double its size
    if(i == word_array_size){
      if((words = realloc(words, sizeof(char *) * (word_array_size *= 2))) == NULL){
        printf("Error: words realloc failed");
        exit(1);
      }
    }

  }

  //Sort the array
  qsort(words, i, sizeof(char *), compare_words);
  

  for(int j = 0; j < i; j++){
    printf("%s\n", words[j]);
  }

  free(word);
  free(words);
  
  return 0;
}

int compare_words(const void *p, const void *q){
  return strcmp(*(char **) p, *(char **) q);
}

int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}