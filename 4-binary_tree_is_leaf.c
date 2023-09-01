#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node:  function that checks if a node is a leaf
 *
 * Return: 1 if node is a leaf, otherwise 0
 * if node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int bintree_node;

	if (!node)
		return (0);

	bintree_node = (node->right == NULL && node->left == NULL) ? 1 : 0;

	return (bintree_node);
}
