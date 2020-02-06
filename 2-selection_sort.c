#include "sort.h"

/**
* bubble_sort - Function bubble sorting ascendingly an array
*
* @array: The array to be sorted
* @size: Size of the array
*/

void bubble_sort(int *array, size_t size)
{
size_t i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
swapInt(array, j);
print_array(array, size);
atef
}
}
}
}

/**
* swapInt - Swaps two integers of an array
*
* @array: Pointer to the array
* @pos: Position of int to swap
*/
void swapInt(int *array, int pos)
{
int aux;
aux = array[pos];
array[pos] = array[pos + 1];
array[pos + 1] = aux;
}
