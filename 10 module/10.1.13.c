/* Assuming that L is a bidirectional non-circular list without a header, describe the delete(L, X) function, which removes from the list L all links that store the number X (if any) */

#include <stdio.h>
#include <stdlib.h>

struct listnode 
{
    int elem;
    struct listnode *prev, *next;
};

struct listnode *delete(struct listnode *L, int x)
{
    if (L == NULL)
    {
        return NULL;
    }
    
    while (L != NULL)
    {
        if (L->elem == x)
        {
            if (L->prev == NULL)
            {
                L = L->next;
                L->prev = NULL;
            }
            else if (L->next == NULL)
            {
                L = L->prev;
                L->next = NULL;
                while (L->prev != NULL)
                {
                    L = L->prev;
                }
                return L;
            }
            else
            {
                struct listnode *temp = L->next;
                temp->prev = L->prev;
                L = L->prev;
                L->next = temp;
            }
        }
        L = L->next;
    }
}

int main()
{
    struct listnode *L, *p, *q;
    p = malloc(sizeof(struct listnode));
    L = p;
    p->prev = NULL;
    p->elem = 2;
    p->next = malloc(sizeof(struct listnode));
    q = p;
    
    p = p->next;
    p->prev = q; 
    p->elem = 1;
    p->next = malloc(sizeof(struct listnode));
    q = p;
    
    p = p->next;
    p->prev = q;
    p->elem = 2;
    p->next = malloc(sizeof(struct listnode));
    q = p;
    
    p = p->next;
    p->prev = q;
    p->elem = 3;
    p->next = malloc(sizeof(struct listnode));
    q = p;
    
    p = p->next;
    p->prev = q;
    p->elem = 2;
    p->next = NULL;
    
    int x = 2;
    L = delete(L, x);
    while (L != NULL)
    {
        printf("%d\n", L->elem);
        L = L->next;
    }
}