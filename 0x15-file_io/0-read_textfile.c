#include "main.h"

/**
* read_textfile - reads a text file and prints it
* @filename: name of file
* @letters: numbers of letters
* Return: 0 always
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ptr, re, wr;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	ptr = open(filename, O_RDONLY);
	if (ptr == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	re = read(ptr, buffer, letters);
	if (re == -1)
	{
		free(buffer);
		return (0);
	}
	wr = write(STDOUT_FILENO, buffer, re);
	if (wr == -1 || re != wr)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(ptr);
	return (wr);
}
