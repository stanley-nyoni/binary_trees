#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a binary tree
* @tree: pointer to the root node of the binary tree to measure
*
* Return: depth(size_t), else 0 if tree is NULL
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_depth(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_depth(tree->right) : 0;

	return ((left > right) ? left : right);
}
