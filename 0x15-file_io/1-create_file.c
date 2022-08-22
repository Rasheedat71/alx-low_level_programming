#include "main.h"

/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int r, k, e = 0;

	if (!filename)
		return (-1);

	r = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (r < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[e])
			e++;
		k = write(r, text_content, e);
		if (k != e)
			return (-1);
	}

	close(r);

	return (1);
}
