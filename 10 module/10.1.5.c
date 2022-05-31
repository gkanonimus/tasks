/* Describe a function copy(L) that builds a copy of the list L and returns
a pointer to the start of a new list */

#include <stdio.h>
#include <stdlib.h>

struct listnode 
{
    int elem;
    struct listnode *next;
};

struct listnode *copy(struct listnode *L)
{
    if (L == NULL)
    {
        return NULL;
    }

    struct listnode *q, *R;
    q = malloc(sizeof(struct listnode));
    R = q;
    
    while (L != NULL)
    {
        q->elem = L->elem;
        if (L->next == NULL)
        {
            q->next == NULL;
            return R;
        }
        q->next = malloc(sizeof(struct listnode));
        L = L->next;
        q = q->next;
    }
    return R;
}

int main()
{
    struct listnode *L, *p;
    p = malloc(sizeof(struct listnode));
    L = p;
    p->elem = 5;
    p->next = malloc(sizeof(struct listnode));
    
    p = p->next; 
    p->elem = 3;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    
    
    p->elem = 4;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    
    p->elem = 8;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    
    p->elem = 7;
    p->next = NULL;
    
    struct listnode *R = copy(L);
    while (R != NULL)
    {
        printf("%d\n", R->elem);
        R = R->next;
    }
}