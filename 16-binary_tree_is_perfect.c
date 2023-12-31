#include "binary_trees.h"

/**
* binary_tree_fullnodes - counts nodes with at least
* two child in a binary tree
* @tree: pointer to the node whose leaves is to be measured
* Return: leaves number
*/

size_t binary_tree_fullnodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (nodes);
	if (!tree->left && !tree->right)
		nodes = 1;
	if (tree->left && tree->right)
	{
		nodes = 1 + binary_tree_fullnodes(tree->left);
		nodes = nodes + binary_tree_fullnodes(tree->right);
	}
	return (nodes);
}


/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: root node
* Return: 1 or 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_fullnodes(tree->left) == binary_tree_fullnodes(tree->right))
	{
		/*l_full = binary_tree_is_full(tree->left);*/
		/*r_full = binary_tree_is_full(tree->right);*/
		return (1);
	}
	return (0);
}
