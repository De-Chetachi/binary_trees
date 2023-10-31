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

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: root node
* Return: 1 or 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect = 0;

	if (!tree)
		return (0);

	if (binary_tree_balance(tree) != 0)
		return (0);

	if (!tree->left && !tree->right)
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		perfect = 1;
	}
	perfect = perfect * binary_tree_is_perfect(tree->left);
	perfect = perfect * binary_tree_is_perfect(tree->right);

	return (perfect);
}
