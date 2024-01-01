#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - entry point of the function
 *
 * return: always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
		printf("Last digit of %d is %d and is  greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n" n, lastDigit);
	else
		printf("Last digit of %d is %d and is  less than 6 and not 0\n", n, lastDigit);
	return (0);
}
