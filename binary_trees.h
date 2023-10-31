#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s {
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/**
 * binary_tree_node - Creates a new binary tree node.
 *
 * @parent: A pointer to the parent node of the new node.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/**
 * bst_t - Binary search tree node
 */
typedef binary_tree_t bst_t;

/**
 * avl_t - AVL tree node
 */
typedef binary_tree_t avl_t;

/**
 * heap_t - Max binary heap node
 */
typedef binary_tree_t heap_t;

/* Printing helper function from ALX tools */
void binary_tree_print(const binary_tree_t *);

#endif /* BINARY_TREES_H */
