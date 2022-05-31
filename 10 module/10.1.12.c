/* Assuming that L is a one-way circular list without a header, write a function insert(L, X) that inserts the number X at the beginning of the list L */

#include <stdio.h>
#include <stdlib.h>

struct listnode 
{
    int elem;
    struct listnode *next;
};

struct listnode *insert(struct listnode *L, int x)
{
    struct listnode *q;
    q = malloc(sizeof(struct listnode));
    q->elem = x;
    q->next = L;
    int temp = L->elem;
    while (L->next->elem != temp)
    {
        L = L->next;
    }
    L->next = q;
    return q;
    
}

int main()
{
    struct listnode *L, *p;
    p = malloc(sizeof(struct listnode));
    L = p;
    p->elem = 1;
    p->next = malloc(sizeof(struct listnode));
    
    p = p->next; 
    p->elem = 2;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    
    
    p->elem = 4;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    
    p->elem = 8;
    p->next = malloc(sizeof(struct listnode));
    p = p->next;
    
    p->elem = 16;
    p->next = L;
    
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);
    L = insert(L, x);
}