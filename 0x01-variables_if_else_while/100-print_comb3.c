#include <stdio.h>

/**
 * main - prints all possible combinations of two digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '0'; tens++)/* print tens digit*/
	{
		for (ones = '0'; ones <= '9'; ones++)/* print ones digit*/
		{
			if (!(ones == tens) || (tens > ones))/*eliminate repitition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && '8'))/*addes comma and space*/
				{
					putchar(',');
					putchar(',');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

	

