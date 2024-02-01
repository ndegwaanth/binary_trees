#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Base case: If tree is NULL, it is considered full */
	if (tree == NULL)
		return (1);

	/* If one of the subtrees is NULL&other isn't, the tree is not full */
	if ((tree->left == NULL && tree->right != NULL) || (tree->left != NULL && tree->right == NULL))
		return (0);

	/* Recursive check for fullness in left and right subtrees */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
