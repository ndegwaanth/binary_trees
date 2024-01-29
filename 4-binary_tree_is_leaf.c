#include <stdlib.h>
/**
 * binary_tree_is_leaf - check if there is leaf node
 * @node: a pointer to the node
 * Return: node
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*Check if the node is NULL*/
	if (node == NULL)
	{
		return (0); /*Return 0 if the node is NULL */
	}
	
	/*Return 1 if the node has no left or right child (is a leaf), otherwise 0*/
	return (node->left == NULL && node->right == NULL);
}
