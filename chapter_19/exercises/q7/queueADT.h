#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef struct queue_type *Queue;

Queue create(void);
void destroy(Queue q);
void make_empty(Queue q);
bool is_empty(Queue q);
void insert(Queue q, void *i);
void *get_from_back(Queue q);
void *get_from_front(Queue q);
void remove_from_front(Queue q);

#endif