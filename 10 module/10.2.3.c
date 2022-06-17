/* Write a program that translates a given algebraic expression containing operands (integers), parentheses, binary operations + and −, into postfix notation. Treat the dot as a sign of the end of an expression. To solve the problem, use the stack */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct stack
{
    char elem;
    struct stack *next;
};

void clear(struct stack *st)
{
    free(st);
    return;
}

int is_empty(struct stack *st)
{
    if (st == NULL)
    {
        return -1;
    }
    return st->elem;
}

void push(struct stack **st, char ch)
{
    struct stack *new = malloc(sizeof(struct stack));
    new->elem = ch;
    new->next = NULL;
    if (st == NULL)
    {
        new = *st;
    }
    new->next = *st;
    *st = new;
    return;
}

void enqueue(struct stack **st, char ch)
{
    if (*st == NULL)
    {
        struct stack *first = malloc(sizeof(struct stack));
        first->elem = ch;
        first->next = NULL;
        *st = first;
        return;
    }
    
    struct stack *new = *st;
    while (new->next != NULL)
    {
        new = new->next;
    }
    new->next = malloc(sizeof(struct stack));
    new = new->next;
    new->elem = ch;
    new->next = NULL;
    return;
}

char pop(struct stack **st)
{
    char ch;
    struct stack *out;
    if (st == NULL)
    {
        exit(-1);
    }
    out = *st;
    *st = (*st)->next;
    ch = out->elem;
    free(out);
    return ch;
}

int main()
{
    struct stack *st = NULL;
    struct stack *queue = NULL;
    char ch;
    for (int i = 0; (ch = getchar()) != EOF; i++)
    {
        if (ch >= '0' && ch <= '9')
        {
            enqueue(&queue, ch);
        }
        if (ch == '+' || ch == '-' || ch == '(')
        {
            push(&st, ch);
        }
        if (ch == ')')
        {
            char temp = pop(&st);
            while (temp != '(')
            {
                enqueue(&queue, temp);
                temp = pop(&st);
            }
        }
        if (ch == '.')
        {
            while (is_empty(st) != -1)
            {
                enqueue(&queue, pop(&st));
            }
            break;
        }
    }
    while (is_empty(queue) != -1)
    {
        printf("%c ", pop(&queue));
    }
    printf("\n");
}