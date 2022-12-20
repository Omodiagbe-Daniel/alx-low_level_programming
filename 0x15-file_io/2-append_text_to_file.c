#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of file
* @text_content: content to be written into the file
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, z;

	if (filename == NULL)
	{
		return (-1);
	}
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		z = write(i, text_content, 0);
		return (1);
	}
	j = 0;
	while (text_content[j])
	{
		j++;
	}
	z = write(i, text_content, j);
	if (z != j)
	{
		return (-1);
	}
	close(i);
	return (1);
}
