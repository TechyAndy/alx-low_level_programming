#include "main.h"
<<<<<<< HEAD

/**
 *
 *  * print_last_digit - prints the last digit of a number
 *
 *   *@n: number being tested
 *    * Return: Always (0)
 **/

=======
>>>>>>> 068e90576dfe0d0f75c5246ef95fe0e11762763f

/**
 * print_last_digit - prints the last digit of a number
 *@n: number being tested
 * Return: Always 0.
 */

int print_last_digit(int n)
{
<<<<<<< HEAD
n = n % 10;

if (n < 0)

n = -n;

_putchar (n + '0');

return (n);

=======
	n = n % 10;

	if (n < 0)
		n = -n;
		_putchar(n + '0');
		return (n);
>>>>>>> 068e90576dfe0d0f75c5246ef95fe0e11762763f
}
