#include <stdio.h>
/**
  * main - program that prints the largest prime factor no
  *
  * Return: 0 (success)
  */
int main(void)
{
	long n;
	long div;
	long ans;
	long maxFact;

	n = 612852475143;
	div = 2;
	ans = 0;
	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld is the largest prime factor!\n", maxFact);
				ans = 1;
				break;
			}
		}
	}

	return (0);
}
