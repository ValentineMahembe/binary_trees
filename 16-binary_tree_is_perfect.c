#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree. If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = (tree->left) ? 1 + binary_tree_height(tree->left) : 1;

	if (tree->right != NULL)
		right_height = (tree->right) ? 1 + binary_tree_height(tree->right) : 1;

	return ((left_height > right_height) ? left_height : right_height);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, otherwise 0. If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height;
	int right_height;
	int left_perfect;
	int right_perfect;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		if (tree->left != NULL && tree->right != NULL)
		{
			left_perfect = binary_tree_is_perfect(tree->left);
			right_perfect = binary_tree_is_perfect(tree->right);

			return (left_perfect && right_perfect);
		}
	}

	return (0);
}
