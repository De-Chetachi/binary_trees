#include "binary_trees.h"

/**
* binary_tree_balance - checks the balance factor of a binary tree
* @tree: root nodde
* Return: balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!tree)
		return (0);
	if (tree->left)
		height_left = 1 + binary_tree_balance(tree->left);
	else
		 height_left = 0;
	if (tree->right)
		height_right = 1 + binary_tree_balance(tree->right);
	else
		height_right = 0;

	return (height_left - height_right);
}
