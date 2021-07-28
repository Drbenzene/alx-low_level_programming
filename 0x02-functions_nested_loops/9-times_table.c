include "holberton.h"
/**
 * times_table - Print 9 times table
 *
 * Return: Void.
 */

void times_table(void)
{
	int x = 0;
	int y = 0;
	int multiplied_value;

	while (x < 10)
	  {
	    while (y < 10)
	      {
		multiplied_value = x * y;
		
		if (multiplied_value <=9 && y != 0)
		  {
		    _putchar(' ');
		  }
		if (multiplied_value > 9)
		  {
		    _putchar(multiplied_value / 10 + '0');
		    _putchar(multiplied_value % 10 + '0');
		  }
		else
		  {
		    _puchar(multiplied_value + '0');
		  }
		if (y != 9)
		    _putchar(',');
		    _putchar(' ');
		  }
		y++;
	      }
	    _putchar('\n');
	    x++;
	    y = 0;
}
}
