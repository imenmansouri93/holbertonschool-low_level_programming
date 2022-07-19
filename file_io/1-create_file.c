#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: he name of the file to create.
 * @text_content: file content
 * Return: 1 if file can be created
 *
 */
int create_file(const char *filename, char *text_content)
{
int fd, fdw, s;
s = 0;
if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
open(filename, O_CREAT, 0600);
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content)
{
while (text_content[s])
s++;
fdw = write(fd, text_content, s);
if (fdw != s)
{
return (-1);
}
}
close(fd);
return (1);
}
