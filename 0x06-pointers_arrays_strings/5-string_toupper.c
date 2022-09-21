#include "main.h"
/**
 * *string_toupper - the entry point
 * Description: reverses the content of an array of integers.
 * @s: character pointer
 * Return: always 0
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
