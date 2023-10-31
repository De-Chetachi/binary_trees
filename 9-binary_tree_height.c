#include "binary_trees.h"

/**
* binary_tree_height - traverse a tree preorder
* @tree: root nodde
* Return: void
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (!tree)
		return (0);
	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);
	else
		 height_left = 0;
	if (tree->right)
		height_right = 1 + binary_tree_height(tree->right);
	else
		height_right = 0;

	return (height_left > height_right ? height_left : height_right);
}
