#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node, NULL if node is NULL, the parent is NULL, or no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    /* Check if node or its parent is NULL */
    if (node == NULL || node->parent == NULL)
        return (NULL);

    /* If node is the left child, return the right child (and vice versa) */
    if (node == node->parent->left)
        return (node->parent->right);
    else if (node == node->parent->right)
        return (node->parent->left);
    else
        return (NULL); /* If node is not a child of its parent, return NULL */
}