#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with at least 1 child in binary tree
 * @tree: pointer to root
 * Description: ptr to rt
 * Return: If tree is NULL, the function must return 0, else return node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	size += binary_tree_nodes(tree->left);
	size += binary_tree_nodes(tree->right);
	return (size + 1);
}
