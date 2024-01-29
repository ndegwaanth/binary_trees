#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 *binary_tree_insert_right -inserts node as left-child of another node
 * @parent:pointer to the node to insert the left-child in
 * @value:the value to store in the new node
 * Return: a pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/*Check if parent is NULL*/
	if (parent == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for the new right node*/
	binary_tree_t *new_right_node = malloc(sizeof(binary_tree_t));

	/* Check if memory allocation was successful */
	if (new_right_node == NULL)
	{
		return NULL; /*Return NULL on failure */
	}
	/* Initialize the fields of the new right node */
	new_right_node->n = value;
	new_right_node->parent = parent;
	new_right_node->left = NULL;
	new_right_node->right = NULL;

	/* If the parent already has a right child*/
	if (parent->right != NULL) 
	{
		/*Set the new right node as the right child*/
		new_right_node->right = parent->right;
		parent->right->parent = new_right_node;
	}
	/* Set the new right node as the right child of the parent*/
	parent->right = new_right_node;

	return new_right_node;
}
