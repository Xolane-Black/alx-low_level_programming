#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: 0 always (Success)
  */

int main(void)
{
	int a;
	char b;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
		if (a == 9)
		{
			for (b = 'a'; b <= 'f'; b++)
				putchar(b);
		}
	}
	putchar('\n');
	return (0);
}
