#include<unistd.h>

/**
 * _putchar - writes the character c t stdout
 * #c: the character to print
 * Return: On sucess 1.
 * On error, -1 ls returned, and errno is set appropriately
 */

int_putchar(char c)
{
	return(write(1, &c, 1));
}
