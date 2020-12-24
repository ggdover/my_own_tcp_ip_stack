#include "sll.h"
#include <stdlib.h> // NULL, malloc
#include <stdio.h> // printf

typedef struct _mynode
{
    sll_node* node;
    int data;
} mynode;

int main(void)
{
    mynode* a = sll_alloc_node(sizeof(mynode));
    a->data = 2;

    mynode* b = sll_alloc_node(sizeof(mynode));
    b->data = 5;

    mynode* c = sll_alloc_node(sizeof(mynode));
    c->data = 7;

    sll mylist;
    mylist.head = mylist.tail = NULL;
    sll_push(&mylist, (sll_node*)a);
    sll_push(&mylist, (sll_node*)c);
    sll_push(&mylist, (sll_node*)b);

    sll_node* walk = mylist.head;
    for (; walk != NULL; walk = walk->next)
    {
        mynode* n = (mynode*)(walk);
        printf("n.data = %d\n", n->data);
    }

    printf("End of program\n");

    return 0;
}