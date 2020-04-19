#include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 * @array: pointer to start of array
 * @size: size of the array
 * @value: value to search
 *
 * Return: index where value was found
 * On error: -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int r = size - 1;
	int l = 0;
	size_t m = 0;

	if (!array)
		return (-1);

	while (l <= r)
	{
		m = l + ((value - array[l]) * (r - l) / (array[r] - array[l]));

		if (m >= size)
		{
			printf("Value checked array[%ld] is out of range\n", m);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", m, array[m]);

		if (array[m] > value)
			r = m - 1;
		else if (array[m] < value)
			l = m + 1;
		else
			return (m);
	}

	return (-1);
}
