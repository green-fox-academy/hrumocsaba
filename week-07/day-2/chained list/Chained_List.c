#include "Chained_List.h"
#include <stdlib.h>
#include <stdio.h>

void push_back(node_t **head, int data) {

    node_t* tail = get_tail(*head);
    node_t* new_node = (node_t*)calloc(1,sizeof(node_t));
    new_node->data = data;
    tail->next = new_node;
    new_node->next = NULL;
}


node_t* get_tail(node_t* head){
    while (head->next != NULL){
        head = head->next;
    }
    return head;
}


void printnodes(node_t *head) {
    if(head == NULL){
        printf("Empty list\n");
        return;
    }
    while(head != NULL){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

//node_t *init(node_t* node, int data) {
//    node = (node_t*)malloc(sizeof(node_t));
//
//    node->data = data;
//    node->next = NULL;
//    return node;
//}


node_t* pop_back(node_t* head) {
    if(head == NULL)return NULL;
    if(head->next == NULL){
        free(head);
        return NULL;
    }

    node_t* before_last = head;
    while (before_last->next->next != NULL){
        before_last = before_last->next;
    }
    free(before_last->next);
    before_last->next = NULL;
    return head;
}

node_t* get_tail_before(node_t* head){
    while (head->next != NULL){
        head = head->next;
    }
    return head;
}
