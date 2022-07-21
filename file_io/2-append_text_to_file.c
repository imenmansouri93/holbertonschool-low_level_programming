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
int fd, fdwt;
int len = 0;
len = strlen(text_content);
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_RDONLY | O_APPEND);
fdwt = write(fd, text_content, len);
if (fd == -1 || fdwt == -1)
{
return (-1);
}
close(fd);
return (1);
}
