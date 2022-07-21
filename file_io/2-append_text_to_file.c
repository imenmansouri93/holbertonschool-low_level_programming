#include<string.h>
#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: text file
 * Return: 1 if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
if (filename == NULL)
return (-1);
fd = open(filename, O_RDONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content)
{
if (write(fd, text_content, strlen(text_content)) == -1)
return (-1);
}
close(fd);
return (1);
}

