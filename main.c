#include <stdio.h>
#include <stdlib.h>
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
    if (!root)
    {
        printf("Failed to create the root node\n");
        return (1);
    }

    printf("Node created with value %d\n", root->n);
    return (0);
}
