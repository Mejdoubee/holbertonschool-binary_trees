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
* binary_tree_height - function that measures the height of a binary tree
*
* @tree: pointer to the root node of the tree to measure the height
* Return: height of the tree , 0 If tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_H = 0, right_H = 0;

	if (!tree || binary_tree_is_leaf(tree))
	{
		return (0);
	}

	left_H = binary_tree_height(tree->left);
	right_H = binary_tree_height(tree->right);
	if (left_H > right_H)
	{
		return (left_H + 1);
	}
	return (right_H + 1);
}
