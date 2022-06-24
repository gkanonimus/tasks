/* Describe a queue implementation based on a singly-directed list */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct queue
{
    int elem;
    struct queue *next;
};

void clear(struct queue *st)
{
    while (st != NULL)
    {
        struct queue *temp = st;
        st = st->next;
        free(temp);
    }
    printf("Queue has been cleared\n");
    return;
}

bool is_empty(struct queue *st)
{
    if (st == NULL)
    {
        printf("Stack underflow\n");
        return true;
    }
    return false;
}

void enqueue(struct queue **st, int number)
{
    if (*st == NULL)
    {
        struct queue *first = malloc(sizeof(struct queue));
        first->elem = number;
        first->next = NULL;
        *st = first;
        return;
    }
    
    struct queue *new = *st;
    while (new->next != NULL)
    {
        new = new->next;
    }
    new->next = malloc(sizeof(struct queue));
    new = new->next;
    new->elem = number;
    new->next = NULL;
    return;
}

int dequeue(struct queue **st)
{
    int number;
    struct queue *out;
    if (st == NULL)
    {
        exit(-1);
    }
    out = *st;
    *st = (*st)->next;
    number = out->elem;
    free(out);
    return number;
}

int main()
{
    struct queue *L = NULL;
    for (int i = 0; i < 10; i++)
    {
        enqueue(&L, i);
    }
    while (!is_empty(L))
    {
        printf("%d popped out\n", dequeue(&L));
    }
}