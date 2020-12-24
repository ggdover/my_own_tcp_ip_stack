#include "sll.h"

void sll_push(sll* list, sll_node* node)
{
    if (list->head == NULL)
    {
        list->head = list->tail = node; 
        list->head->next = list->tail->next = NULL;
    }
    else
    {
        list->tail->next = node;
        list->tail = list->tail->next;
    }
}

void sll_delete(sll* list, sll_node* node)
{
    sll_node* to_remove = list->head;

    // Walk the list until ro_remove is the node we want to remove
    while (to_remove != node)
    {
        to_remove = to_remove->next;
    }

    // Remove it by writing over it.
    to_remove = node->next;
    free(to_remove);
}

void* sll_alloc_node(size_t node_size)
{
    sll_node* new_node = malloc(node_size);
    new_node->next = NULL;
    return new_node;
}
