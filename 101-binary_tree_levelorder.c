#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
    /* Check if tree is NULL */
    if (tree == NULL)
        return (0);

    return (binary_tree_is_complete_util(tree, 0, binary_tree_size(tree)));
}

/**
 * binary_tree_is_complete_util - Utility function to recursively check if a binary tree is complete.
 * @tree: Pointer to the current node in the tree.
 * @index: Index of the current node in the complete binary tree.
 * @size: Total number of nodes in the binary tree.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete_util(const binary_tree_t *tree, size_t index, size_t size)
{
    /* Check if tree is NULL */
    if (tree == NULL)
        return (1);

    /* Check if the current node's index is greater than or equal to the total number of nodes */
    if (index >= size)
        return (0);

    /* Recursively check the left and right subtrees */
    return (binary_tree_is_complete_util(tree->left, 2 * index + 1, size) &&
            binary_tree_is_complete_util(tree->right, 2 * index + 2, size));
}