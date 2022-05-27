/* Write a function insert(L, X) that inserts a number X into a non-decreasing list L so that the resulting list is also non-decreasing */

#include <stdio.h>
#include <stdlib.h>

struct listnode 
{
    int elem;
    struct listnode *next;
};

struct listnode *insert(struct listnode *L, int x)
{
    struct listnode *q;
    q = malloc(sizeof(struct listnode));
    q->elem = x;
    q->next = NULL;
    if (L == NULL)
    {
        return q;
    }
    
    struct listnode *R = L;
    while (L != NULL)
    {
        if (L->elem > x)
        {
            q->elem = L->elem;
            L->elem = x;
            q->next = L->next;
            L->next = q;
            return R;
        }
        if (L->next == NULL)
        {
            L->next = q;
            return R;
        }
        L = L->next;
   }
   return R;
}

int main()
{
    struct listnode *L, *p;
    p = malloc(sizeof(struct listnode));
    L = p;
    p->elem = 1;
    p->next = malloc(sizeof(struct listnode));
    
    p = p->next; 
    p->elem = 2;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    
    
    p->elem = 4;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    
    p->elem = 8;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    
    p->elem = 16;
    p->next = NULL;
    
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);
    L = insert(L, x);
    while (L != NULL)
    {
        printf("%d\n", L->elem);
        L = L->next;
    }
}