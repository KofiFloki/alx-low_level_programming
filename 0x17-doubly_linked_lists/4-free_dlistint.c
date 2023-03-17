#include "lists.h"
/**
 * free_dlistint - free a DLL
 * @head: pointer to the head of the DLL
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
	free(head);
}
