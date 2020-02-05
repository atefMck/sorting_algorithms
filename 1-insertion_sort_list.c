#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * insertion_sort_list - function to sorting list with insertion
 * @list: pointer to point of listint_t
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
listint_t *New_list;
if (list == NULL)
return;
New_list = (*list)->next;
while (New_list != NULL)
{
while (New_list->prev != NULL && New_list->prev->n > New_list->n)
{
New_list->prev->next = New_list->next;
if (New_list->next != NULL)
New_list->next->prev = New_list->prev;
New_list->next = New_list->prev;
New_list->prev = New_list->prev->prev;
New_list->next->prev = New_list;
if (New_list->prev == NULL)
*list = New_list;
else
New_list->prev->next = New_list;
print_list(*list);
}
New_list = New_list->next;
}
}
