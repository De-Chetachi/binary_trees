#include "binary_trees.h"

/**
* binary_tree_sibling - finds the sibling of a node
* @node: pointer to node looking for its sibling
* Return: pointer to sibling or null
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *pt, *sibling = NULL;

	if (!node)
		return (sibling);
	if (!node->parent)
		return (sibling);
	pt = node->parent;
	if (pt->left == node)
		sibling = pt->right;
	else if (pt->right == node)
		sibling = pt->left;

	return (sibling);
}
