/* Describe a function sort(L) that sorts a list L in non-decreasing order */

#include <stdio.h>
#include <stdlib.h>

struct listnode 
{
    int elem;
    struct listnode *next;
};

struct listnode *find_min(struct listnode *top)
{
    struct listnode *find = top->next;
 
    while (find != NULL)
    {
        if (find->elem < top->elem)
        {
            top = find;
        }
        find = find->next;
    }
    return top;
}
 
void sort(struct listnode *L)
{
    if (L == NULL)
    {
        return;
    }
    
    while (L != NULL)
    {
        struct listnode *min = find_min(L);
 
        if (min != L)
        {
            int temp  = L->elem;
            L->elem   = min->elem;
            min->elem = temp;
        }
        L = L->next;
    }
}

int main()
{
    struct listnode *L, *p;
    p = malloc(sizeof(struct listnode));
    L = p;
    p->elem = 5;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    p->elem = 8;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    p->elem = 3;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    p->elem = 4;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    p->elem = 7;
    p->next = NULL;
    
    sort(L);
    while (L != NULL)
    {
        printf("%d\n", L->elem);
        L = L->next;
    }
}