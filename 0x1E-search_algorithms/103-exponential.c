#include <stdio.h>

/**
 * print_range - print a given array within a range
 * @array: pointer to start of array
 * @from: index to start
 * @upto: index to limit
 *
 * Return: nothing
 * On error: nothing
 */
void print_range(int *array, int from, int upto)
{
        int *limit = array + upto;

        printf("Searching in array: ");

        for (array += from; array < limit; array++)
                printf("%d, ", *array);

        printf("%d\n", *array);
}

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to start of array
 * @size: size of the array
 * @value: value to search
 *
 * Return: index where value was found
 * On error: -1
 */
int binary_search(int *array, size_t size, int value)
{
        int r = size - 1;
        int l = 0;
        int m = 0;

        if (!array)
                return (-1);

        while (l <= r)
        {
                print_range(array, l, r);
                m = (l + r) / 2;

                if (array[m] > value)
                        r = m - 1;
                else if (array[m] < value)
                        l = m + 1;
                else
                        return (m);
        }

        return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 * @array: pointer to start of array
 * @size: size of the array
 * @value: value to search
 *
 * Return: index where value was found
 * On error: -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t m = 1;
	size_t limit = 0;
	int out = 0;
	size_t max_index = 0;

	if (!array)
		return (-1);

	while (m < size && array[m] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", m, array[m]);
		m *= 2;
	}

	max_index = (m >= size) ? size - 1 : m;
	printf("Value found between indexes [%ld] and [%ld]\n", m / 2, max_index);

	limit = (m < size) ? (m / 2) + 1 : size - (m / 2);
	out = binary_search(&array[m / 2], limit, value);

	return (out != -1) ? out + ( int )(m / 2) : -1;
}
