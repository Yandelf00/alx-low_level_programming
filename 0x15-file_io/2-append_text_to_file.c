#include "main.h"
/**
  * append_text_to_file - func that append to a file
  * @filename: name of file
  * @text_content: NULL terminated string to write to file
  * Return: 1 if succes or -1 on failue
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, len;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
		write(file, text_content, len);
	}
	close(file);

	return (1);
}
