#include "binary_trees.h"

/**
 * binary_tree_is_root - Checking the node if it's a root of a binary tree
 * @node: Point to the node
 *
 * Return: If it's a root node - 1.
 *         Or - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
