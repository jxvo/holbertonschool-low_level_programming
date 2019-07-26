#include "binary_trees.h"
/**
 * binary_tree_height - find the height of a tree
 * @tree: tree to find the height of
 *
 * Return: Height from end point
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t countL, countR;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (0);

	countL = binary_tree_height(tree->left);
	countR = binary_tree_height(tree->right);

	if (countL > countR)
		return (countL + 1);
	else
		return (countR + 1);
}
