#include "main.h"
/**
 * _strcpy - a function which copies teh strings pointed to by src to the buffer pointed to by dest
 * @l: holds the parameters of dest
 * @x: holds the parameters of src
 * Return value: the pointer to dest
 */
char *_strcpy(char *dest, char *src)

{
int l = 0;
int x = 0;
while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}
