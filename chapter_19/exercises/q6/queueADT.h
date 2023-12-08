#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef struct queue_type *Queue;

typedef char *Item;

Queue create(int size);
void destroy(Queue q);
void make_empty(Queue q);
bool is_empty(Queue q);
void insert(Queue q, Item i);
Item get_from_back(Queue q);
Item get_from_front(Queue q);
void remove_from_front(Queue q);

#endif