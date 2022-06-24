/* Describe a stack implementation based on a singly-directed list */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct stack
{
    int elem;
    struct stack *next;
};

void clear(struct stack *st)
{
    while (st != NULL)
    {
        struct stack *temp = st;
        st = st->next;
        free(temp);
    }
    printf("Stack has been cleared\n");
    return;
}

bool is_empty(struct stack *st)
{
    if (st == NULL)
    {
        printf("Stack underflow\n");
        return true;
    }
    return false;
}

void push(struct stack **st, int number)
{
    struct stack *new = malloc(sizeof(struct stack));
    new->elem = number;
    new->next = NULL;
    if (st == NULL)
    {
        new = *st;
    }
    new->next = *st;
    *st = new;
    return;
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

int main()
{
    struct stack *L = NULL;
    for (int i = 0; i < 10; i++)
    {
        push(&L, i);
    }
    clear(L);
    while (!is_empty(L))
    {
        printf("%d popped out\n", pop(&L));
    }
}