#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: variable pointer
 * @letters: number of letters to be read
 *
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, w;
	char *sentence;

	if (filename == NULL)
	{
		return (0);
	}
	sentence = malloc(letters);
	if (sentence == NULL)
	{
		return (0);
	}

	a = open(filename, O_RDONLY);
	if (a == -1)
	{
		free(sentence);
		return (0);
	}
	b = read(a, sentence, letters);
	w = write(STDOUT_FILENO, sentence, b);
	close(a);
	return (w);
}
