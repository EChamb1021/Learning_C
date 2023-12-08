#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"


struct queue_type {
    Item *contents;
    int front;
    int length;
};

static void terminate(const char *message){
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queue create(int size){

  Queue q = malloc(sizeof(struct queue_type));

  if(q == NULL){
      terminate("Error in create: queue could not be created.");
  }

  q->contents = malloc(sizeof(void *) * size);

  if(q->contents == NULL){
    free(q);
    terminate("Error in create: array could not be created.");
  }

  q->front = 0;
  q->length = size;

  return q;

}

void destroy(Queue q){

    free(q->contents);
    free(q);

}

void make_empty(Queue q){
    while(!is_empty(q)){
        remove_from_front(q);
    }
}

bool is_empty(Queue q){
    return q->front == 0;
}

bool is_full(Queue q){
    return q->length == q->front;
}

void insert(Queue q, Item i){

    if(is_full(q)){
        terminate("Error: Queue is full");
    }

    for(int j = 0; j < q->front; j++){
        q->contents[j+1] = q->contents[j]; 
    }

    q->contents[0] = i;
    q->front++;
}

Item get_from_back(Queue q){

    return q->contents[0];
}

Item get_from_front(Queue q){
    return q->contents[q->front - 1];
}

void remove_from_front(Queue q){

    if(is_empty(q)){
       terminate("Error: Queue is empty.");
    }

    q->front--;
}


