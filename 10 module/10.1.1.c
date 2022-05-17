/* Describe the function sum2(L) that returns the sum of the last and
penultimate numbers in the list L (if any) */

#include <stdio.h>
#include <stdlib.h>

struct listnode 
{
    int elem;
    struct listnode *next;
} *L, *p;

int sum2(struct listnode *L)
{
    if (p == NULL || p->next == NULL)
    {
       return '\0';
    }
    else
    {
        int sum = 0;
        p = L;
        while (p->next->next != NULL)
        {
            p = p->next;
        }
        sum += p->elem + p->next->elem;
        return sum;
    }
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
    
    printf("%d\n", sum2(L));
}