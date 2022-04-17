#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main()

{
	int a;
	long int b;
	long long int c;
	char e;
	float f;

	printf("Size of char: zu% bytes\n", sizeof(e));
	printf("Size of int: zu% bytes\n", sizeof(a));
	printf("Size of long int: zu% bytes\n", sizeof(b));
	printf("Size of long long int: zu% bytes\n",sizeof(c));
	printf("Size of float: zu% bytes\n",sizeof(f));

	return (0);
}
