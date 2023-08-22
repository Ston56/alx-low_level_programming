#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @src: char type string
 * @dest: char type string
 * Description: copy the string pointed to by pointer  'scr' to
 * the buffer pointed to by 'dest'
 * Return: Pointer to 'dest'
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
