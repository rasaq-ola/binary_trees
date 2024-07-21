#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    if (root == NULL)
    {
        fprintf(stderr, "Failed to create root node\n");
        return (1);
    }

    binary_tree_insert_left(root, 54);

    printf("Node created with value %d\n", root->left->n);
    return (0);
}
