#include <stdio.h>
#include "lists.h"

/**
 * display_list - Displays all the elements of a linked list.
 * @head: Pointer to the list_t list to display.
 *
 * Return: The number of nodes displayed.
 */
size_t display_list(const list_t *head)
{
	size_t total_count = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (none)\n");
		else
			printf("[%u] %s\n", head->len, head->str);

		head = head->next;
		total_count++;
	}

	return (total_count);
}

