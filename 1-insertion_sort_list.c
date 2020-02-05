#include "sort.h"
/**
* @list : dobly linked list
* insertion_sort_list - sorting in an ascending manner
*/
void insertion_sort_list(listint_t **list)
{
listint_t *temp, *head;
if (list == NULL)
return;
head = *list;
while (head->next != NULL)
{
while (head->next != NULL)
{
if (head->n > head->next->n)
{
temp = head;
if (head->prev != NULL)
head->prev = temp->next;
head->next = temp->next->next;
head->prev->next = temp->next;
head->prev->next = temp;
head->next->prev = temp->prev;
if (head->next != NULL)
head->next->prev = temp;
if (head->prev->prev == NULL)
*list = head->prev;
head = *list;
print_list(*list);
break;
}
head = head->next;
}
}
}
