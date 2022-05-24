/* Describe a function that takes an array as a parameter and builds
by it a list containing the same elements in the same order. As a result
the function returns a pointer to the beginning of the constructed list */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct listnode 
{
    int elem;
    struct listnode *next;
};

struct listnode * build(int *array, int length)
{
    struct listnode *p;
    p = malloc(sizeof(struct listnode));
    p->next = NULL;
    struct listnode *R;
    R = p;
    for (int i = length - 1; i >= 0; i--)
    {
        p->elem = array[i];
        p->next = malloc(sizeof(struct listnode));
        p = p->next;
        p->next = NULL;
    }
    return R;
}

int main()
{
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = i * i;
    }
    struct listnode * first = build(array, SIZE);
    while (first->next != NULL)
    {
        printf("%d\n", first->elem);
        first = first->next;
    }
}