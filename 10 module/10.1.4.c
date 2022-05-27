/* Describe a function that takes an array as a parameter and builds
by it a list containing the same elements in the same order. As a result
the function returns a pointer to the beginning of the constructed list */

#include <stdio.h>
#include <stdlib.h>

struct listnode 
{
    int elem;
    struct listnode *next;
};

struct listnode *build(int *array, int length)
{
    if (length < 1)
    {
        return NULL;
    }
    
    struct listnode *p, *R;
    p = malloc(sizeof(struct listnode));
    R = p;
    
    for (int i = 0; i < length; i++)
    {
        p->elem = array[i];
        if (i + 1 == length)
        {
            p->next = NULL;
            return R;
        }
        p->next = malloc(sizeof(struct listnode));
        p = p->next;
    }
    return R;
}

int main()
{
    int length = 5;
    int array[length];
    for (int i = 0; i < length; i++)
    {
        array[i] = i * i;
    }
    
    struct listnode *L = build(array, length);
    while (L != NULL)
    {
        printf("%d\n", L->elem);
        L = L->next;
    }
}