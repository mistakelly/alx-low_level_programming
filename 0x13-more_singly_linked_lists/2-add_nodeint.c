#include "lists.h"

/**
 * add_nodeint - add new node at the beginning of a linked list
 * @head: points to first node in the list
 * @n: the data to insert in that new node
 *
 * Return: pointer a  new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

