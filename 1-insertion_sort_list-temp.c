#include "sort.h"

/**
* insertion_sort_list - Function insertion sorting ascendingly a linked list
*
* @list: The head of the list
*/

void insertion_sort_list(listint_t **list)
{
listint_t *temp, *temp1;
temp = (*list)->next;
while (temp)
{
temp1 = temp->prev;
if (temp->n < temp1->n)
{
while (temp1)
{
if (temp1->n < temp->n)
break;
swapNode(temp, temp1);
print_list(*list);
temp1 = temp1->prev;
}
}
temp = temp->next;
}
}

/**
* swapNode - Swaps two nodes of a linked list
*
* @node: First node
* @node1: Second node
*/
void swapNode(listint_t *node, listint_t *node1)
{

listint_t *pnext, *nprev, *tempN, *tempN1;
nprev = node->next;
pnext = node1->prev;
tempN = node;
tempN1 = node1;
if (nprev)
{
nprev->prev = tempN1;
tempN1->next = nprev;
}
else
tempN1->next = NULL;
if (pnext)
{
pnext->next = tempN;
tempN->prev = pnext;
}
else
tempN->prev = NULL;

tempN->next = tempN1;
tempN1->prev = tempN;
}
