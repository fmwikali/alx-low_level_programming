#include <unistd.h>

/**
 * main - Entry point
 *
 * Declaration: 'The program's description'
 * Return: Always 0 (success)
 */

int main(void)
{
	char str[] = "and that of art is useful\" - Dora Korpar, 2015-10-19";
	write(2, "and that of art is useful\" - Dora Korpar, 2015-10-19\n", sizeof(str));
	return (1);
}
