#include <stdio.h>
#include <stdlib.h>

typedef struct t_list List;

struct t_list{
    List* next;
    void* data;
};

List* createListWithOneElement(void* data){
    List* tmp = (List*)malloc(sizeof(List));
    if (tmp){
        tmp -> data = data;
        tmp -> next = NULL; 
    }
    return tmp;
}

List* AddDataFisrt(List* old, void* data){
    List* tmp = createListWithOneElement(data);
    if (tmp){
        tmp -> next = old;
    }
    return tmp;
}

List* AddDataLast(List* old, void* data){
    List** p_old = &old;
    while(*p_old){
        p_old = &(*p_old) -> next;
    }
    *p_old = createListWithOneElement(data);
    if(*p_old){
        //after modifications
        return old;
    }
    else{
        return NULL;
    }
}

List* RemoveDataFisrt(List* list){
    List* tmp = list;
    list = list -> next;
    free(tmp);
    return list;
}

void DestroyList(List* list){
    while(list){
        list = RemoveDataFisrt(list);
    }
}

int list_length(List *list){
    int length = 0;
    while (list)          
       length++;         
       list = list->next; 
     return length;
}

int main(void){
    List* list = NULL;
    return 0;
}
