#include<string.h>
#include "main.h"
/**
 * @brief 
 * 
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, fdwt = 0;
int len = 0;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
len = strlen(text_content);
len++;
}
fd = open(filename, O_RDONLY | O_APPEND);
fdwt = write (fd, text_content, len);
if (fd == -1 || fdwt == -1)
{
return(-1);
}
close(fd);
return(1);
}