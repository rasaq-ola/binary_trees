# Binary Trees

This repository contains an implementation of various binary tree operations in C.

## Description

Binary trees are a type of data structure in which each node has at most two children, referred to as the left child and the right child. This project includes functions for creating and manipulating binary trees, including:

1. Creating a new node.
2. Inserting a node as the left child.
3. Inserting a node as the right child.
4. Deleting an entire binary tree.
5. Checking if a node is a leaf.
6. Checking if a node is the root.

## Data Structures

The binary tree nodes are defined using the following structure:

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
