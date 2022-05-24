/* Describe the same(L1, L2) function that determines whether the lists L1 and L2 are the same
(let's call lists the same if they contain the same numbers in the same order) */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct listnode 
{
    int elem;
    struct listnode *next;
};

bool same(struct listnode *L, struct listnode *R)
{
    while (L != NULL)
    {
        if (L->elem != R->elem)
        {
            return false;
        }
        L = L->next;
        R = R->next;
    }
    return true;
}

int main()
{
    struct listnode *L, *p, *R, *q;
    p = malloc(sizeof(struct listnode));
    L = p;
    p->elem = 5;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    p->elem = 8;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    p->elem = 3;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    p->elem = 4;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    p->elem = 7;
    p->next = NULL;
    
    q = malloc(sizeof(struct listnode));
    R = q;
    q->elem = 5;
    q->next = malloc(sizeof(struct listnode));
    q = q->next;
    q->elem = 8;
    q->next = malloc(sizeof(struct listnode));
    q = q->next;
    q->elem = 3;
    q->next = malloc(sizeof(struct listnode));
    q = q->next;
    q->elem = 4;
    q->next = malloc(sizeof(struct listnode));
    q = q->next;
    q->elem = 7;
    q->next = NULL;
    
    if (same(L, R))
    {
        printf("These lists are the same\n");
    }
    else
    {
        printf("These lists are not the same\n");
    }
}