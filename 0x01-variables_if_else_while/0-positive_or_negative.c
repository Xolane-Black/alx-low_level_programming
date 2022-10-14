#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  *
  *Return: 0 Always (Success)
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("is zero\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("is positive\n");
	return (0);
}
