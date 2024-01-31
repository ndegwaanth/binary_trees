#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: Size of the tree, 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	/* Base case: If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Recursive call to find the size of the left subtree */
	size += binary_tree_size(tree->left);

	/* Recursive call to find the size of the right subtree */
	size += binary_tree_size(tree->right);

	/* Count the current node */
	return (1 + size);
}
