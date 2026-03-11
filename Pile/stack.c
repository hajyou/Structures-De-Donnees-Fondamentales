#include <stdio.h>
#include "stack.h"

void init(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Erreur : la pile est pleine\n");
        return;
    }
    s->data[++(s->top)] = value;
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Erreur : la pile est vide\n");
        return -1;
    }
    return s->data[(s->top)--];
}

int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Erreur : la pile est vide\n");
        return -1;
    }
    return s->data[s->top];
}