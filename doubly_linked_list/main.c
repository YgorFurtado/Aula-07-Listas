#include "doubly_linked_list.h"

int main(void) {
    DLinkedList* list = dlist_create();

    for (int i = 0; i < 10; i++) {
        dlist_insert_first(list, i + 1);
    }
    dlist_print_foward(list);
    dlist_print_backward(list); 
    
    dlist_destroy(list);
    return 0;
}