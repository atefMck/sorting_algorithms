#include "sort.h"

/**
 * bubble_sort - Function bubble sorting ascendingly an array
 *
 * @array: The array to be sorted
 * @size: Size of the array
 */

void bubble_sort(int *array, size_t size)
{
int i;
for (i = 0; i < size - 1; i++) {
  if (array[i] > array[i + 1]) {
    swapInt(array[i], array[i + 1]);
    print_array(array, size);
  }
}
}

/**
 * swapInt - Swaps two integers
 *
 * @a: First int
 * @b: Second int
 */

void swapInt(int a, int b)
{
int aux;
aux = a;
a = b;
b = aux;
}
