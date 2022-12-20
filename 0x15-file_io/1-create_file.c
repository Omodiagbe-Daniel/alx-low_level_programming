#include "main.h"

/**
* create_file - creates a file
* @filename: pointer to filename
* @text_content: content of the file
* Return: 1 on success, -1
*/

int create_file(const char *filename, char *text_content)
{
	int create, fd, num;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		create = write(fd, text_content, 0);
		return (1);
	}
	num = 0;
	while (text_content[num])
	{
		num++;
	}
	create = write(fd, text_content, num);
	if (create != num)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
