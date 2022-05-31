/* Describe the filter(L1, L2) function that removes from the list L1 all the numbers that are contained in the list L2 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct listnode 
{
    int elem;
    struct listnode *next;
};

bool inside(int number, struct listnode *R)
{
    while (R != NULL)
    {
        if (number == R->elem)
        {
            return true;
        }
        R = R->next;
    }
    return false;
}

struct listnode *filter(struct listnode *L, struct listnode *R)
{
    if (L == NULL)
    {
        return NULL;
    }
    if (R == NULL)
    {
        return L;
    }
    
    struct listnode *ret, *ret2;
    ret = malloc(sizeof(struct listnode));
    ret2 = ret;
    
    while (L != NULL)
    {
        if (!inside(L->elem, R))
        {
            ret->elem = L->elem;
            ret->next = malloc(sizeof(struct listnode));
            ret       = ret->next;
        }
        L = L->next;
    }
    ret = NULL;
    return ret2;
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
    
    struct listnode *R, *q;
    q = malloc(sizeof(struct listnode));
    R = q;
    q->elem = 5;
    q->next = malloc(sizeof(struct listnode));
    
    q = q->next;
    q->elem = 3;
    q->next = malloc(sizeof(struct listnode));
    
    q = q->next;
    q->elem = 7;
    q->next = NULL;
    
    L = filter(L, R);
    while (L != NULL)
    {
        printf("%d\n", L->elem);
        L = L->next;
    }
}