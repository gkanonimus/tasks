/* Describe a function reverse(L) that reverses the order of numbers in the list L. (Recommendation: build a new list by adding elements to its beginning.) */

#include <stdio.h>
#include <stdlib.h>

struct listnode 
{
    int elem;
    struct listnode *next;
};

struct listnode *reverse(struct listnode *L)
{
    if (L == NULL)
    {
        return NULL;
    }
    
    struct listnode *q, *q2;
    q = malloc(sizeof(struct listnode));
    q->elem = L->elem;
    q->next = NULL;
    L = L->next;
    while (L != NULL)
    {
        q2 = malloc(sizeof(struct listnode));
        q2->elem = L->elem;
        q2->next = q;
        q = q2;
        L = L->next;
    }
    return q;
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
    
    L = reverse(L);
    while (L != NULL)
    {
        printf("%d\n", L->elem);
        L = L->next;
    }
}