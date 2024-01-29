#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_insert_left -inserts node as left-child of another node
 * @parent:pointer to the node to insert the left-child in
 * @value:the value to store in the new node
 * Return: a pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* Check if parent is NULL*/
	if (parent == NULL)
	{
		return (NULL);
	}
	/* Allocate memory for the new left node*/
	binary_tree_t *new_left_node = malloc(sizeof(binary_tree_t));
	/*Check if memory allocation was successful*/
	if (new_left_node == NULL)
	{
		return (NULL); /* Return NULL on failure*/
	}
	/* Initialize the fields of the new left node */
	new_left_node->n = value;
	new_left_node->parent = parent;
	new_left_node->left = NULL;
	new_left_node->right = NULL;

	/* If the parent already has a left child*/
	if (parent->left != NULL)
	{
		/* Set the new left node as the left child */
		new_left_node->left = parent->left;
		parent->left->parent = new_left_node;
	}

	/* Set the new left node as the left child of the parent */
	parent->left = new_left_node;
	return (new_left_node);
}
