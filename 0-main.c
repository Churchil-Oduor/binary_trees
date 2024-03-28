#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    printf("%d", root->n);

    root->left = binary_tree_node(root, 12);
    printf("%d", root->left->n);
    root->left->left = binary_tree_node(root->left, 6);
   /* root->left->right = binary_tree_node(root->left, 16);

    root->right = binary_tree_node(root, 402);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);
*/
    return (0);
}
