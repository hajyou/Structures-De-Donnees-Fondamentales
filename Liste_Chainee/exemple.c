#include <stdio.h>
#include "Liste_Chainee.h"

int main() {
    List* list = NULL;

    list = AddDataFirst(list, "world");
    list = AddDataFirst(list, "hello");
    list = AddDataLast(list, "!");

    printf("Longueur : %d\n", list_length(list));

    // Affichage simple
    for (List* it = list; it != NULL; it = it->next) {
        printf("%s ", (char*)it->data);
    }
    printf("\n");

    list = RemoveDataFirst(list);

    printf("Après suppression du premier :\n");
    for (List* it = list; it != NULL; it = it->next) {
        printf("%s ", (char*)it->data);
    }
    printf("\n");

    DestroyList(list);
    return 0;
}