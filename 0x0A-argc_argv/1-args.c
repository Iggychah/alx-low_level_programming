#include <stdio.h>

/**
 * main - prints the name number of arguments passed to it.
 * @argc: counts arguments passed to function.
 * @argv: argument vector of pointers to strings.
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
