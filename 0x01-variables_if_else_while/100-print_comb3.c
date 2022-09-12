#include <stdio.h>
/**
 *   main - main block
 *
 *     Description: Write a program that prints all possible
 *
 *       different combinations of two digits
 *
 *         Numbers must be separated by ,, followed by a space
 *
 *           The two digits must be differen
 *             01 and 10 are considered the same combinatio
 *               Print only the smallest combination of two di
 *                 Numbers should be printed in ascending order, wi
 *                   You can only use the putchar functio
 *
 *                     (every other function (printf, puts, etc…) is f
 *
 *                       You can only use putchar five times maximu
 *
 *                         You are not allowed to use any variab
 *
 *                           All your code should be in the main f
 *
 *                             Return: 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
			while (c < 10)
			{
				if (d < c)
				{
					putchar('0' + d);
					putchar('0' + c);

					if (c + d != 17)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
		d++;
	}
	putchar('\n');
	return (0);
}
