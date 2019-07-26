#include "binary_trees.h"

/**
 * binary_tree_nodes - cpjbdd  dfs fds f
 * @tree: tree to find node with at least one child
 * Return: count nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t total;

	if (tree == NULL)
		return (0);

	total = binary_tree_nodes(tree->left) +  binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		total++;
	}

	return (total);
}
