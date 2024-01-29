#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node -  function that creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: node
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* Allocate memory for the new node */
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	/* Check if memory allocation was successful */
	if (new_node == NULL)
	{
		return (NULL); /* Return NULL on failure */
	}
	/* Initialize the fields of the new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
