#include "binary_trees.h"

/**
* binary_tree_height - function that measures the height of a binary tree
*
* @tree: pointer to the root node of the tree to measure the height
* Return: height of the tree , 0 If tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_H = 0, right_H;

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
* binary_tree_size - function that measures the size of a binary tree
* @tree: pointer to the root node of the tree to measure the size
*
* Return: size of the binary tree, or 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
* binary_tree_is_perfect - function that checks if a binary tree is perfect
*
* @tree: pointer to the root node of the tree to check
* Return: 1 if the tree is perfect, 0 otherwise
*
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tree_height = 0, tree_size = 0, perfect_tree_size = 0;

	if (!tree)
	{
		return (0);
	}

	tree_height = binary_tree_height(tree);
	tree_size = binary_tree_size(tree);

	perfect_tree_size = (1 << (tree_height + 1)) - 1;
	if (tree_size == perfect_tree_size)
	{
		return (1);
	}
	return (0);
}
