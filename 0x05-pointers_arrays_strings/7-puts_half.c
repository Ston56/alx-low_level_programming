#include "main.h"
/**
 * puts_half - A funtion that prints half of the string passed to its as an argunment.
 * @a: The argunment passed to the function
 * @n: The argunment passed to teh function
 * @longi: Holds the lenght of input string
 */
void puts_half(char *str)

{
int a, n, longi;
longi = 0;
for (a = 0; str[a] != '\0'; a++)
longi++;
n = (longi / 2);
{
if ((longi % 2) == 1)
n = ((longi + 1) / 2);
for (a = n; str[a] != '\0'; a++)
_putchar(str[a]);
}
_putchar('\n');
}
