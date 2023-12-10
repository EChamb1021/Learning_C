/* XOR encryption */

#include <ctype.h>
#include <stdio.h>

#define KEY '&'

int main(void){

  int original_char, new_char;

  while((original_char = getchar()) != EOF){
    new_char = original_char ^ KEY;
    if(isprint(original_char) && isprint(new_char)){
      putchar(new_char);
    }
    else{
      putchar(original_char);
    }
  }

  putchar('\n');

  return 0;
}