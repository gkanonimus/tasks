/* Describe a queue implementation based on a singly-directed list */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct treenode {
    int data;
    struct treenode *left;
    struct treenode *right;
};

struct queue {
    struct treenode *node;
    struct queue *next;
};

bool is_empty(struct queue *st) {
    if (st == NULL) {
        printf("Stack underflow\n");
        return true;
    }
    return false;
}

void enqueue(struct queue **st, struct treenode *temp) {
    if (*st == NULL) {
        struct queue *first = malloc(sizeof(struct queue));
        first->node->data = temp->data;
        first->next = NULL;
        *st = first;
        return;
    }
    
    struct queue *new = *st;
    while (new->next != NULL) {
        new = new->next;
    }
    new->next = malloc(sizeof(struct queue));
    new = new->next;
    new->node->data = temp->data;
    new->next = NULL;
    return;
}

struct treenode *dequeue(struct queue **st) {
    if (st == NULL) {
        exit(-1);
    }
    struct treenode *out;
    out = (*st)->node;
    *st = (*st)->next;
    return out;
}

int main() {
    struct queue *L = NULL;
    struct treenode *new;
    new->data = 5;
    new->left = NULL;
    new->right = NULL;
    enqueue(&L, new);
    struct treenode *second;
    second = dequeue(&L);
    printf("%d", second->data);
}
