/* Describe the merge(L1, L2) function that builds a new list from two non-decreasing ordered lists L1 and L2 that contains all the numbers from these two lists and is also ordered non-decreasingly.
a) a new list is built from links L1 and L2; the function should not create new links
b) a new list is built from copies of links L1 and L2; lists L1 and L2 do not change */

#include <stdio.h>
#include <stdlib.h>

struct listnode 
{
    int elem;
    struct listnode *next;
};

struct listnode *merge(struct listnode *L, struct listnode *R)
{
    if (L == NULL && R == NULL)
    {
        return NULL;
    }
    
    struct listnode *ret, *NEW;
    ret = malloc(sizeof(struct listnode));
    NEW = ret;
    while (L != NULL && R != NULL)
    {
        if (L->elem >= R->elem)
        {
            ret->elem = R->elem;
            ret->next = malloc(sizeof(struct listnode));
            ret = ret->next;
            R = R->next;
        }
        else
        {
            ret->elem = L->elem;
            ret->next = malloc(sizeof(struct listnode));
            ret = ret->next;
            L = L->next;
        }
    }
    
    if (L == NULL)
    {
        while (R != NULL)
        {
            ret->elem = R->elem;
            ret->next = malloc(sizeof(struct listnode));
            ret = ret->next;
            R = R->next;
        }
    }
    if (R == NULL)
    {
        while (L != NULL)
        {
            ret->elem = L->elem;
            ret->next = malloc(sizeof(struct listnode));
            ret = ret->next;
            L = L->next;
        }
    }
    ret = NULL;
    return NEW;
}

int main()
{
    struct listnode *L, *p;
    p = malloc(sizeof(struct listnode));
    L = p;
    p->elem = 2;
    p->next = malloc(sizeof(struct listnode));
    
    p = p->next; 
    p->elem = 4;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    
    
    p->elem = 6;
    p->next = NULL;
    
    struct listnode *R, *q;
    q = malloc(sizeof(struct listnode));
    R = q;
    q->elem = 1;
    q->next = malloc(sizeof(struct listnode));
    
    q = q->next; 
    q->elem = 3;
    q->next = malloc(sizeof(struct listnode));
    q = q->next;
     
    q->elem = 5;
    q->next = malloc(sizeof(struct listnode));
    q = q->next;
    
    q->elem = 7;
    q->next = malloc(sizeof(struct listnode));
    q = q->next;
    
    q->elem = 9;
    q->next = malloc(sizeof(struct listnode));
    q = q->next;
    
    
    q->elem = 11;
    q->next = NULL;
    
    struct listnode *NEW = merge(L, R);
    while (NEW != NULL)
    {
        printf("%d\n", NEW->elem);
        NEW = NEW->next;
    }
}