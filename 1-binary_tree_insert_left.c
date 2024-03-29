#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that add node to parent left
 * @parent: pointer to the parent node
 * @value: the value to store in the new node
 * Return: pointer to newnode or NULL if failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = NULL;
new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
if (!new_node)
return (NULL);
if (!parent)
{
free(new_node);
return (NULL);
}
new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;
if (parent->left)
{
new_node->left = parent->left;
parent->left->parent = new_node;
}
parent->left = new_node;
return (new_node);
}
