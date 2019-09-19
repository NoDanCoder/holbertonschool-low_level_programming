#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
int main(void)
{
	/* get LastDigit of random number "n"  and set his position */
	int i = 0;
	int j = 0;
	int calc[2] = {0, 0};

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (i != j)
			{
				calc[0] = (j * 10) + i;
				calc[1] = (i * 10) + j;
				if (calc[0] < calc[1])
				{
					putchar(j + '0');
					putchar(i + '0');
					if ((i != 9) || (j != 9))
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
