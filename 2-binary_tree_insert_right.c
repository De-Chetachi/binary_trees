#include "binary_trees.h"

/**
* binary_tree_insert_right -  inserts a node as the right-child of another node
* @parent: parent node
* @value: value stored in node
* Return: new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value){
	binary_tree_t *node, *old;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	/*if parent has left child make it the new node's left child*/
	if (parent->right)
	{
		old = parent->right;
		old->parent = node;
		node->right = parent->right;
	}
	parent->right = node;

	return (node);
}
