#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t lprint, lread, file;
char *buffer;
if (filename == NULL)
{
return(0);
}
buffer = malloc (sizeof(char)*letters);
if (buffer == NULL)
{
return(0);
}
file  = open(filename, O_RDONLY);
lread = read(file, buffer, letters);
lprint = write(STDIN_FILENO, buffer, lread);
if (file == -1 || lprint ==  -1 || lread == -1)
{
 free(buffer);
return (0);
}
free(buffer);
close(file);
return(lprint);
}