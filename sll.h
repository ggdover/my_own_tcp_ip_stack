// sll.h - Single linked list
//
// A simple implementation of single linked-list

#include <stdlib.h> // NULL

/*
 * **** How to use this linked list ****
 * 
 * 1. Create your own struct with the first element being a 'sll_node*'
 * 2. Whenever passing the address of instance of this struct, cast it to 'sll_node*'
 * 
 */

struct _sll_node
{
    struct _sll_node* next;
};
typedef struct _sll_node sll_node;

typedef struct _sll
{
    sll_node* head; // Points to first element
    sll_node* tail; // Points to last element
} sll;

// Adds element to last/tail of list
void sll_push(sll* list, sll_node* node);

// Delete element from list (Deletes by matching pointer address)
void sll_delete(sll* list, sll_node* node);

// Allocate and initialize new node which address too is returned
// Parameter 'node_size' is the size of node to be allocated
void* sll_alloc_node(size_t node_size);
