#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabets lowercase
 *
 * Reurn: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[1]);
	}
	putchar('\n');
	return (0);
}
