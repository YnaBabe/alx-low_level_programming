#include <stdio.h>

/**
 * main -Entry
 * Return: Always 0
 */
int main(void)
{
	char lo;

	for (lo = 'z'; lo >= 'a'; lo++)
		putchar(lo);

	putchar('\n');

	return (0);
}
