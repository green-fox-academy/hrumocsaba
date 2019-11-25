#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char data;
    struct node* next;
}node_t;

node_t* get_tail(node_t* head){
    while (head->next != NULL){
        head = head->next;
    }
    return head;
}

void push_back(char data, node_t** head){
    node_t* tail = get_tail(*head);
    node_t* new_node = (node_t*)calloc(1,sizeof(node_t));
    new_node->data = data;
    tail->next = new_node;
    new_node->next = NULL;
}

void printnodes(node_t *head) {
    if(head == NULL){
        printf("Empty list\n");
        return;
    }
    head = head->next;
    while(head != NULL){
        printf("%c", head->data);
        head = head->next;
    }
    printf("\n");
}

node_t *init(node_t* node, char data) {
    node = (node_t*)malloc(sizeof(node_t));

    node->data = data;
    node->next = NULL;
    return node;
}


int main() {
    node_t* list;
    list->next = NULL;

    printf("Hello, World!\n");
    char text[] = "hello world!!";
    for (int i = 0; i < sizeof(text)/ sizeof(char); ++i) {
        push_back(text[i],&list);
    }
    printnodes(list);

    return 0;
}