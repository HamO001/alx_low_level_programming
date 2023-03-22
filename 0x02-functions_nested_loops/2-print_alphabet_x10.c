#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabets, in lowercase
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char latter;

	while (count++ <= 9)
	{
	for (latter = 'a'; latter <= 'z'; latter++);
	_putchar(latter);
	_putchar('\n');
	}
}
