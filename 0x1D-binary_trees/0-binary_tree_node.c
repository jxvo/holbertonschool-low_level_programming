#include "binary_trees.h"

/**
 * binary_tree_node - Creates new tree node
 * @parent: parent node
 * @value: value
 * Return: pointer to new tree node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);

}
