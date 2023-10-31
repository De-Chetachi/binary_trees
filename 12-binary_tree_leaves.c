#include "binary_trees.h"

/**
* binary_tree_leaves - counts the leaves of a node in a binary tree
* @tree: pointer to the node whose leaves is to be measured
* Return: leaves number
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (leaves);
	if (!tree->left && !tree->right)
		return (leaves  + 1);
	leaves = leaves + binary_tree_leaves(tree->left);
	leaves = leaves + binary_tree_leaves(tree->right);
	return (leaves);
}
