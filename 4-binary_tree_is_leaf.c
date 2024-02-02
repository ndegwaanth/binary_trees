#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if there is leaf node
 * @node: a pointer to the node
 * Return: node
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
