#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 * Return: NULL
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Base case: if tree or func is NULL, do nothing */
	if (tree == NULL || func == NULL)
		return;
	/* Call the function on the current node's value */
	func(tree->n);

	/* Recursive call for left subtree */
	binary_tree_preorder(tree->left, func);

	/* Recursive call for right subtree */
	binary_tree_preorder(tree->right, func);
}
