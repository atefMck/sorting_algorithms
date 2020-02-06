#include "sort.h"

/**
* selection_sort - Function selection sorting ascendingly an array
*
* @array: The array to be sorted
* @size: Size of the array
*/

void selection_sort(int *array, size_t size)
{
size_t i, j, min_index;
for (i = 0; i < size; i++)
{
min_index = i;
for (j = i + 1; j < size; j++)
{
if (array[min_index] > array[j])
min_index = j;
}
if (swapIntS(array, i, min_index))
{
print_array(array, size);
}
}
}

/**
* swapInt - Swaps two integers of an array
*
* @array: Pointer to the array
* @pos: Position of int to swap
*/
int swapIntS(int *array, int pos1, int pos2)
{
int aux;
if (pos1 == pos2)
return (0);
aux = array[pos1];
array[pos1] = array[pos2];
array[pos2] = aux;
return (1);
}
