#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert left node
 * @parent: parent node
 * @value: value
 *
 * Return: Pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new_left_node;

	if (parent == NULL)
		return (NULL);

	new_left_node = malloc(sizeof(binary_tree_t));
	if (new_left_node == NULL)
		return (NULL);

	new_left_node->n = value;
	new_left_node->left = NULL;
	new_left_node->right = NULL;
	new_left_node->parent = parent;

	if (parent->left != NULL)
	{
		new_left_node->left = parent->left;
		parent->left->parent = new_left_node;
	}
	parent->left = new_left_node;

	return (new_left_node);
}
