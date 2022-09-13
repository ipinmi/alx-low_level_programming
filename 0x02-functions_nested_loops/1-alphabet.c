#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - entry point
 *
 *Description: prints the alphabet in lowercase
 *
 *Return: always zero
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a', i <= 'z', i++)
		_putchar(i);
	_putchar('\n');
}
