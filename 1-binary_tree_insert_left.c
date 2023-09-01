#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *bintree1;

	if (!parent)
		return (NULL);

	bintree1 = malloc(sizeof(binary_tree_t));
	if (!bintree1)
		return (NULL);

	bintree1->n = value;
	bintree1->parent = parent;
	bintree1->right = NULL;
	bintree1->left = NULL;

	if (parent->left != NULL)
	{
		bintree1->left = parent->left;
		parent->left->parent = bintree1;
		parent->left = bintree1;
	}
	else
		parent->left = bintree1;

	return (bintree1);
}
