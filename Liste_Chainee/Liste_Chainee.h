#ifndef LIST_C
#define LIST_C

typedef struct t_list List;

struct t_list{
    List* next;
    void* data;
};

List* createListWithOneElement(void* data);

List* AddDataFirst(List* old, void* data);

List* AddDataLast(List* old, void* data);

List* RemoveDataFirst(List* list);

void DestroyList(List* list);

int list_length(List *list);

#endif