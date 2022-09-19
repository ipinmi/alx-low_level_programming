#include "main.h"
/**
 * puts2 - the entry point
 *
 * Description: prints a string in reverse
 *
 * @str: pointer string
 *
 * Return: always 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
