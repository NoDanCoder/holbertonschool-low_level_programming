#include <math.h>
#include <stdio.h>

/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: pointer to start of array
 * @size: size of the array
 * @value: value to search
 *
 * Return: first index where value is located
 * On error: -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t block = sqrt(size);
	size_t pos = 0;
	size_t limit = 0;

	char *success_msg = "Value found between indexes [%d] and [%d]\n";
	char *search_msg = "Value checked array[%d] = [%d]\n";

	if (!array)
		return (-1);

	for (; 1; pos += block)
	{
		if (array[pos] >= value || pos >= size)
		{
			if (pos == 0)
				printf(search_msg, pos, array[pos]);

			pos -= (pos == 0) ? 0 : block;
			printf(success_msg, pos, pos + block);
			break;
		}

		printf(search_msg, pos, array[pos]);
	}

	for (limit = pos + block; pos <= limit && pos < size; pos++)
	{
		if (array[pos] == value)
		{
			printf(search_msg, pos, array[pos]);
			return (pos);
		}

		printf(search_msg, pos, array[pos]);
	}

	return (-1);
}
