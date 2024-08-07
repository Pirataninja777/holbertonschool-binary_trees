#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 * of another node.
 * @parent: A pointer to the node to insert the right-child.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the created node, or NULL on failure,
 *         or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = parent->right;
	newNode->left = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = newNode;
	}

	parent->right = newNode;

	return (newNode);
}
