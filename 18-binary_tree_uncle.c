#include "binary_trees.h"
/**
 * binary_tree_uncle - finds uncle of node
 * @node: pointer to node
 * Description: ptr to nd
 * Return: If node is NULL or pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node || !node->parent || !node->parent->parent
	|| !node->parent->parent->left
	|| !node->parent->parent->right)
	return (0);

	uncle = node->parent->parent->right;
	uncle = (node->parent == uncle) ? node->parent->parent->left : uncle;

	return uncle;
}
