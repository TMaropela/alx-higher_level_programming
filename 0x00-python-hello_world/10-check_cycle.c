#include <stdlib.h>#include "lists.h"
/**
 * check_cycle - check for cycle in linked ls
 * @list: head of our linkedlist
 * Descrip. - check for cycle in linked ls
 * Return: 1 if cycle, otherwise 0
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (!list)
	{
		return (0);
	}
	slow = list;
	fast = list->next;
	while (fast && slow && fast->next)
	{
		if (slow == fast)
		{
			return (1);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
