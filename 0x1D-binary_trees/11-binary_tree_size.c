#include "binary_trees.h"

/**
 * binary_tree_size - measure size of tree
 * @tree: tree to find depth
 *
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size;

	if (tree == NULL)
		return (0);


	tree_size = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;

	return (tree_size);
}
