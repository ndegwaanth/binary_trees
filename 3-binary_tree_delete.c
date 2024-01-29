#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: A pointer to the root node
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/*Check if the tree is NULL*/
	if (tree == NULL)
	{
		return; /*Do nothing if the tree is NULL*/
	}
	/*Delete the left subtree*/
	binary_tree_delete(tree->left);
	/*Delete the right subtree*/
	binary_tree_delete(tree->right);
	/* Free the current node*/
	free(tree);
}
