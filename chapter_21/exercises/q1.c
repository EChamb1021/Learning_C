/*
Write a program that declares the s structure and prints the sizes and offsets of each member
*/
#include <stdio.h>
#include <stddef.h>

//There is a hole between a and b of size 3

struct s{
  char a;
  int b[2];
  float c;
} structure;

int main(void){

  char *memory[sizeof(structure)];

  printf("Size of structure: %ld\n\n", sizeof(structure));
  
  printf("Size of 'a' member: %ld\n", sizeof(structure.a));
  printf("Offset of 'a' member: %ld\n\n", offsetof(struct s, a));

  printf("Size of 'b' member: %ld\n", sizeof(structure.b));
  printf("Offset of 'b' member: %ld\n\n", offsetof(struct s, b));

  printf("Size of 'c' member: %ld\n", sizeof(structure.c));
  printf("Offset of 'c' member: %ld\n\n", offsetof(struct s, c));

  for(int i = 0; i < sizeof(structure); i++){
    if(i >= offsetof(struct s, a) && i < offsetof(struct s, a) + sizeof(structure.a)){
      memory[i] = "a";
    }
    else if(i >= offsetof(struct s, b) && i < offsetof(struct s, b) + sizeof(structure.b)){
      memory[i] = "b";
    }
    else if(i >= offsetof(struct s, c) && i < offsetof(struct s, c) + sizeof(structure.c)){
      memory[i] = "c";
    }
    else{
      memory[i] = "";
    }
  }

  for(int i = 0; i < sizeof(structure); i++){
    printf("%d => %s\n", i, memory[i]);
  }

  return 0;
}

