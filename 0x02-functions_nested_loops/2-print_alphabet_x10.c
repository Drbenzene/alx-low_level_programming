#include <holberton.h>
/**
 * print_alphabet_x10 - print entire alphabet on 10 lines
 *
 * Return: Void.
 */
void print_alphabet_x10(void)

{
	int i = 0;
	char c;
		char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
	i++;
}

}
