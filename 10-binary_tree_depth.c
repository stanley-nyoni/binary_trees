#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a binary tree
* @tree: pointer to the root node of the binary tree to measure
*
* Return: depth(size_t), else 0 if tree is NULL
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
