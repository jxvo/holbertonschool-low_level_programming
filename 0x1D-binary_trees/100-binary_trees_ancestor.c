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

/**
 * binary_trees_ancestor - find the lowest common ancester of two nodes
 * @first: first node
 * @second: second node
 *
 * Return: Pointer to the lowest common ancestor, or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t **array;
	size_t i = 0, j = 0;
	size_t first_depth = 0, second_depth = 0;

	if (first == NULL || second == NULL ||
	    first->parent == NULL || second->parent == NULL)
		return (NULL);

	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);

	if (first_depth > second_depth)
	{
		array = calloc((first_depth + 1), sizeof(binary_tree_t *));
		if (array == NULL)
			return (NULL);
		j = first_depth;
	}
	else
	{
		array = calloc((second_depth + 1), sizeof(binary_tree_t *));
		if (array == NULL)
			return (NULL);
		j = second_depth;
	}
	for (i = 0; first != NULL; i++)
	{
		array[i] = first;
		first = first->parent;
	}
	for (; second != NULL; second = second->parent)
		for (i = 0; i <= j; i++)
			if (array[i] == second)
			{
				free(array);
				return ((binary_tree_t *)second);
			}
	free(array);
	return (NULL);
}
