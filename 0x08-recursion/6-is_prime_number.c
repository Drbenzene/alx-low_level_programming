#include "holberton.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * divide - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int divide(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (divide(num, div + 1));
}

/**
 * is_prime_number - function that returns 1 if the input integer is
 * a prime number
 * @n: value
 *
 * Return: 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (divide(n, div));
}

