#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: Balance factor of the tree, 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height, right_height;

    /* Base case: If tree is NULL, return 0 */
    if (tree == NULL)
        return (0);

    /* Recursive call to find the height of the left subtree */
    left_height = (int)binary_tree_height(tree->left);

    /* Recursive call to find the height of the right subtree */
    right_height = (int)binary_tree_height(tree->right);

    /* Calculate and return the balance factor */
    return (left_height - right_height);
}