#include <unistd.h>

/**
 * _putchar - prints character with stdout
 * @ch: The character to print
 * Return: returns Output.
 * On error, -1 is returned, and errno is set appro[riately.
 */

int _putchar(char ch)
{
	static int contador;
	static char buffer[1024];

	if (ch == -1)
	{
		contador = 0;
		return (0);
	}
	if (ch == -2 || contador == 1024)
	{
		write(1, buffer, contador);
		contador = 0;
	}
	if (ch != -1 && ch != -2)
	{
		buffer[contador] = ch;
		contador++;
		return (1);
	}
	return (0);
}
