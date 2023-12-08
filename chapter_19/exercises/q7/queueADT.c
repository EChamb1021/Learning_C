#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

struct node {
    void *data;
    struct node *next;
};

struct queue_type {
    struct node *front;
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

  q->front = NULL;

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
    return q->front == NULL;
}

void insert(Queue q, void *i){

    struct node *new_node = malloc(sizeof(struct node));

    if(new_node == NULL){
        terminate("Error in push: stack is full.");
    }

    struct node *curr;

    if(is_empty(q)){
        new_node->data = i;
        q->front = new_node;
        new_node->next = NULL;
    }
    else{
        for(curr = q->front; curr->next != NULL; curr = curr->next);
        new_node->data = i;
        curr->next = new_node;
        new_node->next = NULL;
    }
}

void *get_from_back(Queue q){

    struct node *curr;
    for(curr = q->front; curr->next != NULL; curr = curr->next);

    return curr->data;
}

void *get_from_front(Queue q){

    return q->front->data;
    
}

void remove_from_front(Queue q){

    struct node *old_front;

    if(is_empty(q)){
       terminate("Error: Queue is empty.");
    }

    old_front = q->front;
    q->front = old_front->next;

    free(old_front);
}


