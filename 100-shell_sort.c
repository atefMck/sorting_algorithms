#include "sort.h"
/**
* @array: Ordering
* @size: array size.
* shell_sort - sort array in asc order
*/
void shell_sort(int *array, size_t size)
{
size_t intv = 0, i, j;
int x = 0;
if (array == NULL || size < 2)
return;
while (intv <= (size / 3))
{
intv = intv * 3 + 1;
}
while (intv > 0)
{
for (i = intv; i < size; i++)
{
x = array[i];
for (j = i; j >= intv && array[j - intv] > x;
j -= intv)
{
array[j] = array[j - intv];
}
array[j] = x;
}
print_array(array, size);
intv = (intv - 1) / 3;
}
}
