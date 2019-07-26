#include "binary_trees.h"

/**
 * binary_tree_sibling - function finds sibling of node
 *@node: pointer to the node to find sibling
 * Return: returns the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);

	if (node->parent->right == node)
		return  (node->parent->left);
	else if (node->parent->left == node)
		return  (node->parent->right);
	else
		return (NULL);
}
