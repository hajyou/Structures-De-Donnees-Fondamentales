#include "List_DC.h"

DList* create_list() {
    DList* list = malloc(sizeof(DList));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

Node* create_node(int value) {
    Node* n = malloc(sizeof(Node));
    n->data = value;
    n->prev = NULL;
    n->next = NULL;
    return n;
}

void push_front(DList* list, int value) {
    Node* n = create_node(value);

    if (list->head == NULL) {
        list->head = list->tail = n;
        return;
    }

    n->next = list->head;
    list->head->prev = n;
    list->head = n;
}

void push_back(DList* list, int value) {
    Node* n = create_node(value);

    if (list->tail == NULL) {
        list->head = list->tail = n;
        return;
    }

    n->prev = list->tail;
    list->tail->next = n;
    list->tail = n;
}

void pop_front(DList* list) {
    if (list->head == NULL) return;

    Node* tmp = list->head;

    if (list->head == list->tail) {
        list->head = list->tail = NULL;
    } else {
        list->head = list->head->next;
        list->head->prev = NULL;
    }

    free(tmp);
}

void pop_back(DList* list) {
    if (list->tail == NULL) return;

    Node* tmp = list->tail;

    if (list->head == list->tail) {
        list->head = list->tail = NULL;
    } else {
        list->tail = list->tail->prev;
        list->tail->next = NULL;
    }

    free(tmp);
}

void print_forward(DList* list) {
    Node* cur = list->head;
    printf("[HEAD] ");
    while (cur) {
        printf("%d <-> ", cur->data);
        cur = cur->next;
    }
    printf("[NULL]\n");
}

void print_backward(DList* list) {
    Node* cur = list->tail;
    printf("[TAIL] ");
    while (cur) {
        printf("%d <-> ", cur->data);
        cur = cur->prev;
    }
    printf("[NULL]\n");
}


void free_list(DList* list) {
    Node* cur = list->head;
    while (cur) {
        Node* next = cur->next;
        free(cur);
        cur = next;
    }
    free(list);
}