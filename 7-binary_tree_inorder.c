#include "binary_trees.h"

/**
 * binary_tree_inorder - a function that uses inorder traversal on a tree
 * @tree: root node
 * @func: a function to read value of node
 */

void binary_tree_inorder(const binary_tree_t *tree, void(*func)(int))
{
if (!tree || !func)
return;
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
