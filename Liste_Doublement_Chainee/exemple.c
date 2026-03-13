#include "List_DC.h"

int main() {
    DList* list = create_list();

    printf("Insertion en tête : 3, 2, 1\n");
    push_front(list, 3);
    push_front(list, 2);
    push_front(list, 1);
    print_forward(list);
    print_backward(list);

    printf("\nInsertion en queue : 4, 5, 6\n");
    push_back(list, 4);
    push_back(list, 5);
    push_back(list, 6);
    print_forward(list);
    print_backward(list);

    printf("\nSuppression en tête\n");
    pop_front(list);
    print_forward(list);

    printf("\nSuppression en queue\n");
    pop_back(list);
    print_forward(list);

    free_list(list);
    return 0;
}