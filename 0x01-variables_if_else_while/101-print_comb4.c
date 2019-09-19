#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* This code print in order all no repeteable combination of 3 digits*/
	int i = 0, j = 0, k = 0, tmp = 0;
	int calc[6] = {0, 0, 0, 0, 0, 0};
	int smallest = 0;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			for (k = 0; k < 10; k++)
			{
				calc[0] = (j * 100) + (i * 10) + k;
				calc[1] = (j * 100) + (k * 10) + i;
				calc[2] = (k * 100) + (j * 10) + i;
				calc[3] = (k * 100) + (i * 10) + j;
				calc[4] = (i * 100) + (k * 10) + j;
				calc[5] = (i * 100) + (j * 10) + k;

				smallest = calc[0];

				for (tmp = 0; tmp < 6; tmp++)
					if (smallest > calc[tmp])
						smallest = calc[tmp];

				if ((calc[0] == smallest) && (i != j && i != k && k != j))
				{
					putchar(j + '0');
					putchar(i + '0');
					putchar(k + '0');
					if ((i != 8) || (j != 7) || (k != 9))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
