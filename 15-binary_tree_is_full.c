#include "binary_trees.h"

/**
* binary_tree_is_leaf - function that checks if a node is a leaf
*
* @node: pointer to the node to check
* Return: 1 if node is a leaf, otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}

	if (!node->left && !node->right)
	{
		return (1);
	}
	return (0);
}

/**
* binary_tree_is_full - function that checks if a binary tree is full
*
* @tree: pointer to the root node of the tree to check
* Return: checks if a binary tree is full , 0 if tree is NULL
*
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (binary_tree_is_leaf(tree))
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}
