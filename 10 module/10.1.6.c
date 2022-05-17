/* Describe a function reverse(L) that reverses the order of numbers in the list L. (Recommendation: build a new list by adding elements to its beginning.) */

#include <stdio.h>
#include <stdlib.h>

struct listnode 
{
    int elem;
    struct listnode *next;
} *L, *p;

struct listnode * build(int *array, int length)
{
    p = malloc(sizeof(struct listnode));
    struct listnode *R;
    R = p;
    for (int i = length - 1; i >= 0; i--)
    {
        p->elem = array[i];
        p->next = malloc(sizeof(struct listnode));
        p = p->next;
    }
    return R;
}

struct listnode * reverse(struct listnode *L)
{
    struct listnode *temp;
    temp = L;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    int array[length];
    for (int i = 0; i < length; i++)
    {
        array[i] = L->elem;
        L = L->next;
    }
    return build(array, length);
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
    p->next->elem = 4;
    p = p->next;
    
    p->next = malloc(sizeof(struct listnode));
    p->next->elem = 7;
    p->next->next = NULL;
    
    L = reverse(L);
    while (L->next != NULL)
    {
        printf("%d\n", L->elem);
        L = L->next;
    }
}