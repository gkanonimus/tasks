/* Describe a function copy(L) that builds a copy of the list L and returns
a pointer to the start of a new list */

#include <stdio.h>
#include <stdlib.h>

struct listnode 
{
    int elem;
    struct listnode *next;
};

struct listnode * copy(struct listnode *L)
{
    struct listnode *q, *R;
    q = malloc(sizeof(struct listnode));
    R = q;
    while (L != NULL)
    {
        q->next = malloc(sizeof(struct listnode));
        q->elem = L->elem;
        L = L->next;
        q = q->next;
    }
    q->next = NULL;
    return R;
}

int main()
{
    struct listnode *L, *p;
    p = malloc(sizeof(struct listnode));
    p->elem = 5;
    
    p->next = malloc(sizeof(struct listnode));
    p->next->elem = 8;
    L = p;
    p = p->next; 

    p->next = malloc(sizeof(struct listnode));
    p->next->elem = 3;
    p = p->next;
    
    p->next = malloc(sizeof(struct listnode));
    p->next->elem = 4;
    p = p->next;
    
    p->next = malloc(sizeof(struct listnode));
    p->next->elem = 7;
    p->next->next = NULL;
    
    struct listnode * R = copy(L);
    while (R->next != NULL)
    {
        printf("%d\n", R->elem);
        R = R->next;
    }
}