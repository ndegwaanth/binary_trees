#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to count the leaves.
 *
 * Return: Number of leaves in the tree, 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* Base case: If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* If it's a leaf, return 1, o.w, sum leaves->&leftright->subtrees */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
