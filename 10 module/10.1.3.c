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

int has_duplicate(struct listnode *L)
{
    if (L == NULL || L->next == NULL)
    {
       return -1;
    }
    
    struct listnode *q, *temp;
    temp = L;
    while (temp->next != NULL)
    {
        q = temp->next;
        while (q != NULL)
        {
            if (temp->elem == q->elem)
            {
                return true;
            }
            q = q->next;
        }
        temp = temp->next;
    }
    return false;
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
    
    p->elem = 8;
    p->next = NULL;
    
    printf("%d\n", has_duplicate(L));
}