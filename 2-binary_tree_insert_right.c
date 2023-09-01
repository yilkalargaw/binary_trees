#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as the right-child of another node
 * @parent: is a pointer to the node to insert the right-child in
 * @value:  is the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or if
 * parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bintree1;

	if (parent == NULL)
		return (NULL);

	bintree1 = binary_tree_node(parent, value);
	if (bintree1 == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		bintree1->right = parent->right;
		parent->right->parent = bintree1;
		parent->right = bintree1;
	}
	else
		parent->right = bintree1;

	return (bintree1);
}
