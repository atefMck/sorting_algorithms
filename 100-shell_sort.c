#include "sort.h"

/**
* @size: array size.
* @array: Ordering
* shell_sort - sort array in asc order
*/

void shell_sort(int *array, size_t size)
{
size_t intv = 0, x1, x2;
int x = 0;

if (array == NULL || size < 2)
return;

while (intv <= (size / 3))
{
intv = intv * 3 + 1;
}

while (intv > 0)
{
	
for (x1= intv; x1< size; x1++)
{
	
	
x = array[x1;
for (x2 = x1; x2 >= intv && array[x2 - intv] > x;

x2 -= intv)
{
array[x2] = array[x2 - intv];
}
array[x2] = x;
}
intv = (intv - 1) / 3;
print_array(array, size);

}

}
