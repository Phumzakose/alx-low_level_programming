#include "main.h"

/**
 * create_file - creates a file
 * @filename: variable pointer
 * @text_content: file
 * Return: 1 on success, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int i, file, p;

	if (text_content == NULL)
	{
		text_content = "";
	}
	if (filename == NULL)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	p = write(file, text_content, i);

	if (file == -1 || p == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
