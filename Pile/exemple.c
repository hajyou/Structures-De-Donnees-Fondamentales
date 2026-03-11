#include <stdio.h>
#include "stack.h"

int main() {
    Stack s;
    init(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Sommet actuel >>> %d\n", peek(&s));

    printf("Pop : %d\n", pop(&s));
    printf("Pop : %d\n", pop(&s));

    printf("Sommet actuel >>> %d\n", peek(&s));

    return 0;
}