/* Describe a function max(L) that returns the maximum value in
non-empty list L */

#include <stdio.h>
#include <stdlib.h>

struct listnode 
{
    int elem;
    struct listnode *next;
};

int max(struct listnode *L)
{
    if (L == NULL)
    {
        return -1;
    }
    struct listnode *temp = L;
    int max = temp->elem;
    while (temp->next != NULL)
    {
        temp = temp->next;
        if (temp->elem > max)
        {
            max = temp->elem;
        }
    }
    return max;
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
    
    printf("%d\n", max(L));
}