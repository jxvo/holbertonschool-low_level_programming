#include "binary_trees.h"

/**
 * binary_tree_depth - find the depth of a tree
 * @tree: tree to find depth
 *
 * Return: Depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);


	while (tree->parent)
	{
		tree = tree->parent;
		count++;
	}
	return (count);
}
