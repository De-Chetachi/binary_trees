#include "binary_trees.h"

/**
* binary_tree_height - traverse a tree preorder
* @tree: root nodde
* Return: void
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		height = 1 + binary_tree_height(tree->left) + binary_tree_height(tree->right);
	return(height);
}
