#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
		printf("Last digit of %d is 0 and is 0\n", n);

	if (n == 0)
		printf("Last digit of %d is 8 and is greater 5\n", n);

	if (n < 6)
		printf("Last digit of %d is -8 and is less than 6 and not 0\n", n);
	return (0);
}
