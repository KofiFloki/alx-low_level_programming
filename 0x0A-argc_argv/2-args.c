#include "main.h"
#include <stdio.h>

/**
 * main - prints all the arguments
 * @argc: number of arguments
 * @argv:the vector that holds the arguments
 *
 * Description: using arc and argv to achieve the function
 * Return: returns 0 if it works or something else if error
*/

int main(int argc, char **argv)
{
	int i = 0;

	while (i++ < argc)
		printf("%s\n", *argv++);
	return (0);
}
