/*

Write a program that prompts the user to enter a series of words separated by spaces,
then prints those words in reverse order.

*/

#include <stdio.h>
#include <string.h>

int main(void){

  char input[250];
  char *words[250];
  int i = 0;

  printf("Enter words separated by a space: ");
  
  fgets(input, 250, stdin);

  input[strlen(input)-1] = '\0';

  if ((words[i] = strtok(input, " ")) == NULL){
    return 0;
  }

  i++;

  while ((words[i] = strtok(NULL, " ")) != NULL){
    i++;
  }

  for (i--; i >=0; i--){
    printf("%s ", words[i]);
  }

  printf("\n");

  return 0;
}