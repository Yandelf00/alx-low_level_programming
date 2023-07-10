#include "main.h"

/**
  * create_file - func that creates a file
  * @filename: name of the file
  * @text_content: NULL terminated string to write to file
  * Return: 1 if succes and -1 if failue
  */

int create_file(const char *filename, char *text_content)
{
	int file, len = 0, check = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		check = write(file, text_content, len);
	}
	close(file);
	if (check != len)
		return (-1);

	return (1);
}
