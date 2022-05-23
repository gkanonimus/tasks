/* Describe the function sum2(L) that returns the sum of the last and prelast numbers in the list L (if any) */

#include <stdio.h>
#include <stdlib.h>

struct listnode 
{
    int elem;
    struct listnode *next;
};

int sum2(struct listnode *L, struct listnode *p)
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
    p->next->elem = 7;
    p->next->next = NULL;
    
    printf("%d\n", sum2(L, p));
}