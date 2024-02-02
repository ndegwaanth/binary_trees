#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node, NULL if node is NULL or has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Check if node is NULL or has no parent or grandparent (no uncle) */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	/* If parent is right child of its parent, return left child of grdpa*/
	else if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	else
		return (NULL);
}
