#include "binary_trees.h"
/**
 * _binary_tree_height - Measures height
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
int _binary_tree_balance(const binary_tree_t *tree)
{
        if (!tree)
                return (0);
        return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}
/**
 * sub_tree_perfect - check perfectness
 * @tree: pointer to root
 * Description: ptr to rt
 * Return: int 
 */
int sub_tree_perfect(const binary_tree_t *tree)
{
        if (tree && !tree->right & !tree->left)
                return (1);

        if (tree && tree->right && tree->left)
                return (1 && sub_tree_perfect(tree->left)
                && sub_tree_perfect(tree->right));
        return (0);
}

/**
 * binary_tree_is_perfect - check binary tree is perfect
 * @tree: pointer to root
 * Decription: prt to rt
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
        if (!tree)
                return (0);

        if (_binary_tree_balance(tree) != 0)
                return (0);

        return (sub_tree_perfect(tree->left) && sub_tree_perfect(tree->right));
}
