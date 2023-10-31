#include "binary_trees.h"
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
		return (0)

	if (!tree->left && !tree->right)
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		perfect = 1;
	}
	perfect = perfect * binary_tree_is_full(tree->left);
	perfect = perfect * binary_tree_is_full(tree->right);

	return (perfect);
}
