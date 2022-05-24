/* Write a function insert(L, X) that inserts a number X into a non-decreasing list L so that the resulting list is also non-decreasing */

#include <stdio.h>
#include <stdlib.h>

struct listnode 
{
    int elem;
    struct listnode *next;
};

struct listnode * insert(struct listnode *L, int x)
{
    struct listnode *q, *R;
    R = L;
    q = malloc(sizeof(struct listnode));
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
        L = L->next;
   }
}

int main()
{
    struct listnode *L, *p;
    p = malloc(sizeof(struct listnode));
    p->elem = 1;
    
    p->next = malloc(sizeof(struct listnode));
    p->next->elem = 2;
    L = p;
    p = p->next; 

    p->next = malloc(sizeof(struct listnode));
    p->next->elem = 4;
    p = p->next;
    
    p->next = malloc(sizeof(struct listnode));
    p->next->elem = 8;
    p = p->next;
    
    p->next = malloc(sizeof(struct listnode));
    p->next->elem = 16;
    p->next->next = NULL;
    
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