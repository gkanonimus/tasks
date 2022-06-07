/* Describe a stack implementation based on a singly-directed list */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct stack
{
    int elem;
    struct stack *next;
};

int is_empty(struct stack *st)
{
    if (st == NULL)
    {
        printf("Stack underflow\n");
        return -1;
    }
    return st->elem;
}

int pop(struct stack **st)
{
    int number;
    struct stack *out;
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

void push(struct stack **st, int number)
{
    struct stack *new = malloc(sizeof(struct stack));
    new->elem = number;
    new->next = *st;
    *st = new;
    return;
}

void clear(struct stack *st)
{
    free(st);
    return;
}

int main()
{
    struct stack *L = NULL;
    for (int i = 0; i < 10; i++)
    {
        push(&L, i);
    }
    while (is_empty(L) != -1)
    {
        printf("%d popped out\n", pop(&L));
    }
}