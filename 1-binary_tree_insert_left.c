#include "binary_trees.h"
/**
 * binary_tree_insert_left - add a node in the left of parent node
 * if it exists then it should move down, and add new node as parent
 * @parent: parent of the node
 * @value: value of new node
 * Return: NULL if it fails or there is a new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t* new_node;

	if (parent ==NULL)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}

