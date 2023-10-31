#include "binary_trees.h"
/**
* binary_tree_is_full - checks if a binary tree is full
* @tree: root node
* Return: 1 or 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (!tree)
		return (full);
	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		full = 1;
	}
	full = full * binary_tree_is_full(tree->left);
	full = full * binary_tree_is_full(tree->right);

	return (full);
}
