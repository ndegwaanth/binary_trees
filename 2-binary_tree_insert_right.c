#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts node as right-child of another node.
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to created node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	/* If parent already has a right child*/
	/* set it as the right child of the new node */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	/* Set the new node as the right child of the parent */
	parent->right = new_node;

	return (new_node);
}
