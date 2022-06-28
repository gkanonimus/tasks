/* Describe a function that:
a) calculates the sum of all elements of a binary tree
b) counts the number of occurrences of a given element in a binary tree
c) calculates the height of a binary tree
d) prints data values from all tree nodes that are not leaves */

#include <stdlib.h>
#include <stdio.h>

struct treenode
{
    int data;
    struct treenode *left;
    struct treenode *right;
};

struct treenode *newNode(int data)
{
    struct treenode *node = malloc(sizeof(struct treenode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int sum(struct treenode *T)
{
    if (T != NULL)
    {
        return T->data + sum(T->left) + sum(T->right);
    }
}

int check(struct treenode *T, int number)
{
    if (T != NULL)
    {
        return (number == T->data) + check(T->left, number) + check(T->right, number);
    }
}

int height(struct treenode *T)
{
   if (T == NULL)
   {
       return 0;
   }
   if (height(T->left) > height(T->right))
   {
       return height(T->left) + 1;
   }
   else
   {
       return height(T->right) + 1;
   }
}

void not_leaves(struct treenode *T)
{
    if (T != NULL)
    {
        if (T->left != NULL || T->right != NULL)
        {
            printf("%d ", T->data);
        }
        not_leaves(T->left);
        not_leaves(T->right);
    }
}

int main()
{
    struct treenode *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->right->right = newNode(8);
    root->right->right->right->right = newNode(9);
    
    printf("Sum is: %d\n", sum(root));
    printf("Counter is: %d\n", check(root, 4));
    printf("Height of the treenode is %d\n", height(root));
    printf("Vertex values that are not leaves:\n");
    not_leaves(root); printf("\n");
}
