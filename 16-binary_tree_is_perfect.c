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

	/* Return the max height btn left&right subtrees, +1 for the current level */
	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* Base case: If tree is NULL, it is not perfect */
	if (tree == NULL)
		return (0);

	/* Find the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Check if tree is full& left &right subtrees have the same height */
	return (binary_tree_is_full(tree) && left_height == right_height);
}
