#include <stdlib.h>

#include <time.h>

#include <stdio.h>
/**
 * main - main block
 * description print whether the number stored in the variable n is positive or negative.
 */
int main(void)
{
		int n;
			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				if (n > 0)
					printf("%i is  postive\n", n);
				else if (n < 0)
					printf("%i is negative\n", n);
				else
					printf("%i is zero\n", n);

				return (0);
}