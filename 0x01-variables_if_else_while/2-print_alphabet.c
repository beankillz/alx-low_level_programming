#include <stdio.h>
/**
 * main - Entry point
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	char al;
	for (al = 'a'; al <= 'z'; al++){
		putchar(al);
		putchar('\n');
	}
	return (0);
}
