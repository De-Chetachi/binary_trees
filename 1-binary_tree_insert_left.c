#include "binary_trees.h"

/**
* binary_tree_insert_left -  inserts a node as the left-child of another node
* @parent: parent node
* @value: value stored in node
* Return: new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value){
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
	if (parent->left)
	{
		old = parent->left;
		old->parent = node;
		node->left = parent->left;
	}
	parent->left = node;

	return (node);
}
