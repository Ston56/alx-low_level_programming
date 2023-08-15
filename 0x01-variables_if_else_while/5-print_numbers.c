#include <stdio.h>
/**
 * main - Entry point
 * Description prints single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base_ten = 0;

	while (base_ten <= 10)
	{
		putchar(base_ten);
			base_ten++;
	}
	putchar('\n');
	return (0);
}

