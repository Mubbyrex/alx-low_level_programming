#include <stdio.h>
/**
 * main - main description
 * Description: displaying all digit of the hexadecimal
 * Return: 0
 */
int main(void)
{
	char c, y;

	c = '0';
	y = 'a';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
