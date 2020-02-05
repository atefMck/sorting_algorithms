#include "sort.h"
/**
* @list : dobly linked list
* insertion_sort_list - sorting in an ascending manner
*/
void insertion_sort_list(listint_t **list)
{
listint_t *x, *head;
if (list == NULL)
return;
head = *list;
while (head->next != NULL)
{
  while (head->next != NULL)
  {
    if (head->n > head->next->n)
  {
  x = head;
  if (head->prev != NULL)
  head->prev->next = x->next;
  head->next->prev = x->prev;
  head->prev = x->next;
  head->next = x->next->next;
  head->prev->next = x;
if (head->next != NULL)
head->next->prev = x;
if (head->prev->prev == NULL)
*list = head->prev;
print_list(*list);
head = *list;
break;
}
head = head->next;
}
}
}
