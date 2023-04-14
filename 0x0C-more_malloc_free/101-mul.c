#include "main.h"

/*
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int v, g;

	if (argc != 3)

	{ printf("Error\n");
		exit(98); }
	for (v = 1; v < argc; v++)
	{
		for (g = 0; argv[v][g] != '\0'; g++)
		{
			if (argv[v][g] > 57 || argv[v][g] < 48)
			{ printf("Error\n");
				exit(98); }
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
