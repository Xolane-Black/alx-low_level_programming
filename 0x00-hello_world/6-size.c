#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: 0 Always (Sucess)
  */

int main(void)
{
	print("Size of a char: %i byte(s)\n", sizeof(char));
	print("Size of a int: %i byte(s)\n", sizeof(int));
	print("Size of a long int: %i byte(s)\n", sizeof(long int));
	print("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	print("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
