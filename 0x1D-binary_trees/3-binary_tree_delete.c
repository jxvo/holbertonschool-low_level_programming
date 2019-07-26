#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 * @tree: Binary tree to be delete
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
