#include "binary_trees.h"

/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: pointer to the root node of the binary tree
*
* Return: count of leaves (size_t) else 0, if tree is NULL
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count += (!tree->left && !tree->right) ? 1 : 0;
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);

	return (count);
}
