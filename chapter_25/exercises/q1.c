/*

Write a program that test whether the "C" locale is the same as the "" locale on your compiler

*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void){

  char *clocale = setlocale(LC_ALL, NULL);
  char *locale = setlocale(LC_ALL, "");

  if (strcmp(clocale, locale) == 0)
      printf("Locales are the same.\n");
  else
      printf("Locales are different.\n");


  return 0;
}