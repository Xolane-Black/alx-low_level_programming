#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: 0 Always (success0
  */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;

	if (ld == 0)
		printf("Last digit of %i is %i and is 0\n", n, ld);
	else if (ld > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, ld);
	else if (ld != 0 && ld < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, ld);
	return (0);
}