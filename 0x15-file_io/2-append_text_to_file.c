#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: variable pointer
 * @text_content: string to add
 * Return: 1 on success, otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
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
	file = open(filename, O_WRONLY | O_APPEND);
	p = write(file, text_content, i);

	if (file == -1 || p == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
