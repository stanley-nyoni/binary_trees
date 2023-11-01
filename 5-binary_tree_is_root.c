#include "binary_trees.h"

/**
* binary_tree_is_root - checks if a given a node is a root
* @node: pointer to a node to check
*
* Return: 1 if node is root, else 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
