#include "binary_trees.h"

/**
* binary_tree_height - function that measures the height of a binary tree
*
* @tree: pointer to the root node of the tree to measure the height
* Return: height of the tree , 0 If tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_H = 0, right_H = 0;

	if (!tree)
	{
		return (-1);
	}

	left_H = binary_tree_height(tree->left);
	right_H = binary_tree_height(tree->right);
	if (left_H > right_H)
	{
		return (left_H + 1);
	}
	return (right_H + 1);
}

/**
* binary_tree_balance - function that measures the balance factor of a
*						binary tree
*
* @tree: pointer to the root node of the tree to measure the balance factor
* Return: balance factor of a binary tree , 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_H = 0, right_H = 0;

	if (!tree)
	{
		return (0);
	}
	left_H = (int)binary_tree_height(tree->left);
	right_H = (int)binary_tree_height(tree->right);
	return (left_H - right_H);
}
