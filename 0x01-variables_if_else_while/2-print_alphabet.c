#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabets lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 27; i++)
	{
		putchar(alp[1]);
	}
	putchar('\n');
	return (0);
}
