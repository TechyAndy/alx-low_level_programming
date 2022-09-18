#include "main.h"

/**
<<<<<<< HEAD
 *
 * * print_line - draws a straight line in the terminal
 *
 * * @n: number of times the character _ should be printed
 *
 * */

void print_line(int n)

=======
* print_line - draws a straight line in the terminal
* @n: number of times the character _ should be printed
*/
void print_line(int n)
>>>>>>> 032fa4aa43d8b1207b5d0518893a87a6366a458a
{
if (n <= 0)
{
_putchar('\n');
} else
{
int i;

<<<<<<< HEAD
	if (n <= 0)

	{

		_putchar('\n');

	} else

	{

		int i;



		for (i = 1; i <= n; i++)

		{

			_putchar('_');

		}

		_putchar('\n');

	}
=======
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
>>>>>>> 032fa4aa43d8b1207b5d0518893a87a6366a458a



}
