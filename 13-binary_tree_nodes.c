#include "binary_trees.h"

/**
* binary_tree_nodes - counts nodes with at least one child in a binary tree
* @tree: pointer to the node whose leaves is to be measured
* Return: leaves number
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (nodes);
	if (tree->left || tree->right)
	{
		nodes = 1 + binary_tree_nodes(tree->left);
		nodes = nodes + binary_tree_nodes(tree->right);
	}
	return (nodes);
}
