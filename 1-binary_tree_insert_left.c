#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node as a left-child 
 * 
 * @parent: A pointer to insert left-child in
 * @value: New node
 *
 * Return:  NULL or  a pointer to new node
 *
 * Description: If the parent node already has a left child, 
 * 				the new node will replace it
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
