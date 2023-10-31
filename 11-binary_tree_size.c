#include "binary_trees.h"

/**
* binary_tree_size - measures the size of a node in a binary tree
* @tree: pointer to the node whose depth is to be measured
* Return: depth
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (size);
	size = 1 + binary_tree_size(tree->left);
	size = size + binary_tree_size(tree->right);
	return (size);
}
