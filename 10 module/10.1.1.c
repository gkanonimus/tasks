/* Describe the function sum2(L) that returns the sum of the last and prelast numbers in the list L (if any) */

#include <stdio.h>
#include <stdlib.h>

struct listnode 
{
    int elem;
    struct listnode *next;
};

int sum2(struct listnode *L)
{
    struct listnode *temp;
    if (L == NULL || L->next == NULL)
    {
       return -1;
    }
    temp = L;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    return temp->elem + temp->next->elem;
}

int main()
{
    struct listnode *L, *p;
    p = malloc(sizeof(struct listnode));
    p->elem = 5;
    L = p;
    p->next = malloc(sizeof(struct listnode));
    p->next->elem = 7;
    p->next->next = NULL;
    
    printf("%d\n", sum2(L));
}