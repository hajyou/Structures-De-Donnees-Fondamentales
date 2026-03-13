#ifndef LIST_DC
#define LIST_DC

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

typedef struct DList {
    Node* head;
    Node* tail;
} DList;

DList* create_list();
Node* create_node(int value);

void push_front(DList* list, int value);
void push_back(DList* list, int value);

void pop_front(DList* list);
void pop_back(DList* list);

void print_forward(DList* list);
void print_backward(DList* list);

void free_list(DList* list);

#endif