#include "binary_trees.h"

/**
 * binary_tree_leaves - count binary tree leaves
 * @tree: tree to find leaves
 * Return: count leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t total;

	if (tree == NULL)
		return (0);

	total = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		total++;
	}

	return (total);
}
