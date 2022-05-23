/* Describe a has_duplicate(L) function that determines whether a list contains L
at least two links with the same numbers */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct listnode 
{
    int elem;
    struct listnode *next;
};

int has_duplicate(struct listnode *L, struct listnode *p)
{
    struct listnode *q;
    p = L;
    while (p->next != NULL)
    {
        q = p->next;
        while (q != NULL)
        {
            if (p->elem == q->elem)
            {
                return true;
            }
            q = q->next;
        }
        p = p->next;
    }
    return false;
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
    p->next->elem = 3;
    p->next->next = NULL;
    
    printf("%d\n", has_duplicate(L, p));
}