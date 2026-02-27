#include "Liste_Chainee.h"
#include <stdlib.h>

List* createListWithOneElement(void* data) {
    List* tmp = malloc(sizeof(List));
    if (tmp) {
        tmp->data = data;
        tmp->next = NULL;
    }
    return tmp;
}

List* AddDataFirst(List* old, void* data) {
    List* tmp = createListWithOneElement(data);
    if (tmp) {
        tmp->next = old;
    }
    return tmp;
}

List* AddDataLast(List* old, void* data) {
    List** p_old = &old;
    while (*p_old) {
        p_old = &(*p_old)->next;
    }
    *p_old = createListWithOneElement(data);
    return old;
}

List* RemoveDataFirst(List* list) {
    if (!list) return NULL;
    List* tmp = list;
    list = list->next;
    free(tmp);
    return list;
}

void DestroyList(List* list) {
    while (list) {
        list = RemoveDataFirst(list);
    }
}

int list_length(List* list) {
    int length = 0;
    while (list) {
        length++;
        list = list->next;
    }
    return length;
}