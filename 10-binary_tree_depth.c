#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @tree: pointer to the node whose depth is to be measured
* Return: depth
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (depth);
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}
