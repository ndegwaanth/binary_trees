#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree, 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    /* Base case: If tree is NULL, return 0 */
    if (tree == NULL)
        return (0);

    /* Recursive call to find the height of the left subtree */
    left_height = binary_tree_height(tree->left);

    /* Recursive call to find the height of the right subtree */
    right_height = binary_tree_height(tree->right);

    /* Return the maximum height between left and right subtrees, plus 1 for the current level */
    return (1 + (left_height > right_height ? left_height : right_height));
}