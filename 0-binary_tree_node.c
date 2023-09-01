#include "binary_trees.h"

/**
 *binary_tree_node - create a binary tree node
 *@parent: a pointer to the parent node of the node to create
 *@value: the value to put in the new node
 *
 *Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bintree1;

	bintree1 = malloc(sizeof(binary_tree_t));

	if (!bintree1)
		return (NULL);

	bintree1->n = value;
	bintree1->parent = parent;
	bintree1->left = NULL;
	bintree1->right = NULL;

	return (bintree1);
}
