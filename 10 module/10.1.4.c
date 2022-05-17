/* Describe a function that takes an array as a parameter and builds
by it a list containing the same elements in the same order. As a result
the function returns a pointer to the beginning of the constructed list */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct listnode 
{
    int elem;
    struct listnode *prev;
} *p;

struct listnode * build(int *array)
{
    for (int i = SIZE - 1; i >= 0; i--)
    {
        p = malloc(sizeof(struct listnode));
        p->elem = array[i];
        printf("%d\n", p->elem);
        p = p->prev;
    }
    return p;
}

int main()
{
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = i * i;
    }
    struct listnode * first = build(array);
}