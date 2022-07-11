#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

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

bool check_tree_in_range(struct treenode *root, int low, int high)
{
  if (root == NULL)
    return true;

  if (root->data < low || root->data > high)
    return false;

  return 
    check_tree_in_range(root->left, low, root->data) &&
    check_tree_in_range(root->right, root->data, high);
}

int main()
{
    struct treenode *root = newNode(8);
    root->left = newNode(3);
    root->right = newNode(10);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    root->left->right->left = newNode(4);
    root->left->right->right = newNode(7);
    root->right->right = newNode(14);
    root->right->right->left = newNode(13);
    
    if (check_tree_in_range(root, -2000000, 2000000))
        printf("This tree is binary search tree\n");
    else
        printf("This tree is NOT binary search tree\n");
}
