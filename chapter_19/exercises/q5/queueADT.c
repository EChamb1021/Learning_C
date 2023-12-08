#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

#define QUEUE_SIZE 100

struct queue_type {
    void *contents[QUEUE_SIZE];
    int front;
};

static void terminate(const char *message){
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queue create(void){

  Queue q = malloc(sizeof(struct queue_type));

  if(q == NULL){
      terminate("Error in create: queue could not be created.");
  }

  q->front = 0;

  return q;

}

void destroy(Queue q){

    make_empty(q);
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

void insert(Queue q, void *i){

    if(q->front > QUEUE_SIZE){
        terminate("Error: Queue is full");
    }

    for(int j = 0; j < q->front; j++){
        q->contents[j+1] = q->contents[j]; 
    }

    q->contents[0] = i;
    q->front++;
}

void *get_from_back(Queue q){

    return q->contents[0];
}

void *get_from_front(Queue q){
    return q->contents[q->front - 1];
}

void remove_from_front(Queue q){

    if(is_empty(q)){
       terminate("Error: Queue is empty.");
    }

    q->front--;
}


