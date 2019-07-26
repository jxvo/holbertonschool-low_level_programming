#include "binary_trees.h"
size_t depth(const binary_tree_t *tree);
int perfectCheck(const binary_tree_t *tree, int depth, int level);

/**
 * binary_tree_is_perfect - function calls another
 * function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int level = 0;
	int d = depth(tree);

	return (perfectCheck(tree, d, level));
}
/**
 * perfectCheck - checks perfection
 * @tree: pointer to the node
 * @depth: depth of the tree
 * @level: current level
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int perfectCheck(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		if (depth == level)
			return (1);
	}
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (perfectCheck(tree->left, depth, level + 1) &&
		perfectCheck(tree->right, depth, level + 1));
}
/**
 * depth - function measures the depth of a tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the tree or NULL
 */
size_t depth(const binary_tree_t *tree)
{
	size_t right_d;
	size_t left_d;

	if (tree == NULL)
		return (0);
	right_d = depth(tree->left);
	left_d = depth(tree->right);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	if (left_d > right_d)
		return (left_d + 1);
	else
		return (right_d + 1);
}
