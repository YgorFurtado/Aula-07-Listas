#include "doubly_linked_list.h"

#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    Element element;
    struct Node* prev;
    struct Node* next;
} Node;

struct DLinkedList {
    Node* sentinel;
    size_t size;
};

DLinkedList* dlist_create(void) {
    DLinkedList* list = malloc(sizeof(DLinkedList));
    //create sentinel node
    list->sentinel = malloc(sizeof(Node));
    list->sentinel->next = list->sentinel;
    list->sentinel->prev = list->sentinel;
    
    
    list->size = 0;

    return list;
}

void dlist_destroy(DLinkedList* list) {
    Node* cur = list->sentinel->next;

    while (cur != list->sentinel) {
        Node* trash = cur;

        cur = cur->next;
        free(trash);
    }

    free(list->sentinel);
    free(list);
}

Node* create_node(Element* element) {
    Node* new_node = malloc(sizeof(Node));

    new_node->element = element;
    new_node->next =NULL;
    new_node->prev = NULL;

    return new_node;
}


void dlist_insert_first(DLinkedList* list, Element element) {
    Node* new_node = create_node(element);

    new_node->prev = list->sentinel;
    new_node->next = list->sentinel->next;
    list->sentinel->next->prev = new_node;
    list->sentinel->next = new_node;

    list->size++;
}

void dlist_print_foward(DLinkedList* list) {
    Node* cur = list->sentinel->next;

    while (cur != list->sentinel) {
        element_print(cur->element);
        cur = cur->next;
        if (cur != list->sentinel) {
            printf(" -> ");
        }
        printf("\n");
    }
}

void dlist_print_backward(DLinkedList* list) {
    Node* cur = list->sentinel->prev;

    while (cur != list->sentinel) {
        element_print(cur->element);
        cur = cur->prev;
        if (cur != list->sentinel) {
            printf(" -> ");
        }
        printf("\n");
    }
}