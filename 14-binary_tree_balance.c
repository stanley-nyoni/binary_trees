#include "binary_trees.h"

/**
* binary_tree_height - gets the height of a binary tree
* @tree: pointer to the root node
*
* Return: height
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return ((left > right) ? left : right);
}


/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node
*
* Return: difference, else 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((int)(left - right));
}
