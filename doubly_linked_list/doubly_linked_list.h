#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "element.h"

typedef struct DLinkedList DLinkedList;

DLinkedList* dlist_create(void);
void dlist_destroy(DLinkedList* list);
void dlist_insert_first(DLinkedList* list, Element element);
void dlist_print_foward(DLinkedList* list);
void dlist_print_backward(DLinkedList* list);
#endif