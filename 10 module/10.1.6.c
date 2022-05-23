/* Describe a function reverse(L) that reverses the order of numbers in the list L. (Recommendation: build a new list by adding elements to its beginning.) */

#include <stdio.h>
#include <stdlib.h>

struct listnode 
{
    int elem;
    struct listnode *next;
};

struct listnode * reverse(struct listnode *L)
{
    struct listnode *q, *q2;
    q = malloc(sizeof(struct listnode));
    q->next = NULL;
    q->elem = L->elem;
    while (L != NULL)
    {
        q2 = malloc(sizeof(struct listnode));
        q2->next = q;
        q2->elem = L->elem;
        q = q2;
        L = L->next;
    }
    return q2;
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
    
    L = reverse(L);
    while (L->next != NULL)
    {
        printf("%d\n", L->elem);
        L = L->next;
    }
}