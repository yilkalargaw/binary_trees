#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: 0 if NULL or else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_cnt = 0;

	if (tree)
	{
		node_cnt += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		node_cnt += (tree->left || tree->right) ? 1 : 0;
	}

	return (node_cnt);
}
