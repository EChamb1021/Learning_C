/* Queue client file (linked list) */

#include <stdio.h>
#include "queueADT.h"


int main(void){

  Queue q1, q2;
  char *n;

  q1 = create();
  q2 = create();

  printf("Insert into q1 the value 'AAA'\n");
  insert(q1, "AAA");

  printf("Insert into q1 the value 'BBB'\n");
  insert(q1, "BBB");

  printf("Insert into q2 the value 'CCC'\n");
  insert(q2, "CCC");

  printf("Insert into q2 the value 'DDD'\n");
  insert(q2, "DDD");

  printf("Value from back of q1: %s\n", (char *) get_from_back(q1));
  printf("Value from front of q1: %s\n", (char *) get_from_front(q1));

  printf("Value from back of q2: %s\n", (char *) get_from_back(q2));
  printf("Value from front of q2: %s\n", (char *) get_from_front(q2));

  remove_from_front(q1);
  printf("Removed from front of q1.\n");
  printf("Front of q1 is now: %s\n", (char *) get_from_front(q1));

  make_empty(q2);
  printf("Made q2 empty.\n");
  printf("Is q2 empty? %s", is_empty(q2) ? "yes\n" : "no\n");

  destroy(q1);
  destroy(q2);

  return 0;
}

