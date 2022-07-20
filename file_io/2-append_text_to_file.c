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
len = strlen(text_content);
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_RDONLY | O_APPEND);
if (text_content != NULL)
{
fdwt = write (fd, text_content, len);
}
if (fd == -1 || fdwt == -1)
return(-1);
close(fd);
return(1);
}