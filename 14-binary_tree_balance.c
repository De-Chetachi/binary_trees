#include "binary_trees.h"

/**
* binary_tree_height_b - traverse a tree preorder
* @tree: root nodde
* Return: void
*/

int binary_tree_height_b(const binary_tree_t *tree)
{
	int height_left = 1, height_right = 1;

	if (!tree)
		return (0);
	if (tree->left)
		height_left = height_left + binary_tree_height_b(tree->left);

	if (tree->right)
		height_right = height_right + binary_tree_height_b(tree->right);

	return (height_left > height_right ? height_left : height_right);
}

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
	height_left = binary_tree_height_b(tree->left);

	height_right = binary_tree_height_b(tree->right);

	return (height_left - height_right);
}
