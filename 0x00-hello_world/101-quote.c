#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
    return (1);
}

