#include <unistd.h>
#include <string.h>
#include <errno.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t bytes_written = write(STDERR_FILENO, message, strlen(message));

	if (bytes_written == -1)
	{
	return errno;
	}

	return 1;
}
