#include <stdio.h>

/**
 * main - Entry
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */
int main(void)

	int i,j;

	for (i =0; i < 99; i++)
	{
		for (j =i + 1; j <= 99; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);

			putchar(' ');
			
