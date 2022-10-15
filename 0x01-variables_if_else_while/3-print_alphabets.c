#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: 0 always (Success)
  */

int main(void)
{
	char a;
	char A;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		if (a == 'z')
		{
			for (A = 'A'; A <= 'Z'; A++)
				putchar(A);
		}
	}
	putchar('\n');
	return (0);
}
