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

/**
* binary_tree_uncle - finds a nodes uncle
* @node: the node looking for its uncle
* Return: pointer to uncle or null
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *pt = NULL;

	if (!node)
		return (pt);
	if (!node->parent)
		return (pt);
	pt = node->parent;
	pt = binary_tree_sibling(pt);

	return (pt);
}
