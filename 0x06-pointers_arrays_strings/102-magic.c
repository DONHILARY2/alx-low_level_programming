#include <stdio.h>

/**
 * print_number - main function
 *
 * @n: Function parameter
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	p[5] = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
