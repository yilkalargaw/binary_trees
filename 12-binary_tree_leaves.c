#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: 0 if NULL or number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_count = 0;

	if (tree != NULL)
	{
		l_count += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
		l_count += (!tree->left && !tree->right) ? 1 : 0;
	}
	return (l_count);
}
