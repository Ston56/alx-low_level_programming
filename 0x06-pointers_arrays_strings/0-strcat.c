#include "main.h"
/**
 *strcat - function that concatenates two strings.
 *@dest: destination strings pointer.
 *@src: source string pointer.
 *Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
int length_of_strings, z;

length_of_strings = 0;
while (dest[length_of_strings] != '\0')
{
 length_of_strings++;
}
for (z = 0; src[z] != '\0'; z++, length_of_strings++)
{
dest[length_of_strings] = src[z];
}
dest[length_of_strings] = '\0';
return (dest);
}
