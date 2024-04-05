#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: head pointer of the node
 * @str: data of the node
 *
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *template;

	if (str == NULL)
	{
		str = "";
	}
	template = malloc(sizeof(list_t));

	if (template != NULL)
	{
		template->next = *head;
		template->str = strdup(str);
		template->len = strnlen(str);
		if (template->str == NULL)
		{
			free(template->str);
			free(template->next);
			free(template);
			return (NULL);
		}
		else
		{
			*head = template;
			return (*head);
		}
	}
	return (NULL);
}
