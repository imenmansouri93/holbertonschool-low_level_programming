#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
size_t lprint, lread, closed, file;
char *buffer;
file = lprint = lread = 0;
buffer = malloc (letters * sizeof(char));
if (filename == NULL)
{
return(0);
}
file  = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
lread = read(file, buffer, letters);
if (lread == -1)
{
return(0);
}
lprint = write(STDIN_FILENO, buffer, lread);
if (lprint ==  -1)
{
return(0);
}
closed = close(file);
if (closed == -1)
{
return(0);
}
free(buffer);
return(lread);
}