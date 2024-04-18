#include "binary_trees.h"
/**
 * binary_tree_height - Measures height
 * @tree: pointer to root
 * Description: ptr to rt
 * Return: size
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	int r_height, l_height;

	if (!tree)
		return (0);
	r_height = _binary_tree_height(tree->right);
	l_height = _binary_tree_height(tree->left);
	return (1 + ((r_height >= l_height) ? r_height: l_height));
}
/**
 * binary_tree_balance - measures balance of binary tree.
 * @tree: pointer to root
 * Description: ptr to rt
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}
