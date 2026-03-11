#ifndef STACK_H
#define STACK_H

#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} Stack;

void init(Stack *s);
int isEmpty(Stack *s);
int isFull(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);
int peek(Stack *s);

#endif