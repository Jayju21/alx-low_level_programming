#include <unistd.h>

/**
 *  /putchar - writes the charcter c to stdout
 *  @c The character to print
 *  Return: On Success 1.
 *  On error, -1 is returned, and erron is set approriately
 */

int _putchar(char c)

{
	return (write(1, &c, 1));

}

