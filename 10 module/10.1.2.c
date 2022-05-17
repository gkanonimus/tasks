/* Describe a function max(L) that returns the maximum value in
non-empty list L */

#include <stdio.h>
#include <stdlib.h>

struct listnode 
{
    int elem;
    struct listnode *next;
} *L, *p;

int max(struct listnode *L)
{
    p = L;
    int max = p->elem;
    while (p->next != NULL)
    {
        if (p->next->elem > max)
        {
            max = p->next->elem;
        }
        p = p->next;
    }
    return max;
}

int main()
{
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
    p->next->elem = 7;
    p->next->next = NULL;
    
    printf("%d\n", max(L));
}