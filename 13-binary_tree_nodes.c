#include "binary_trees.h"

/**
* binary_tree_nodes - counts the nodes with at least 1 child
* @tree: pointer to the root node of the tree to count the number of nodes
*
* Return: count of nodes else 0, if tree is NULL
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count += (tree->left || tree->right) ? 1 : 0;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
