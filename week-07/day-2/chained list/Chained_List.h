#ifndef CHAINED_LIST_CHAINED_LIST_H
#define CHAINED_LIST_CHAINED_LIST_H

#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node_t;

node_t* get_tail(node_t* head);
//node_t* init(node_t * node, int data);
void push_back(node_t** node, int data);

void printnodes(node_t* node);
void destroy(node_t* head);
node_t* pop_back(node_t* node);

#endif //CHAINED_LIST_CHAINED_LIST_H
