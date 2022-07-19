#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
unsigned int read_size;
FILE *handler = fopen(filename, "r");
if (handler)
{
fseek(handler, 0, SEEK_END);
letters = ftell(handler);
rewind(handler);
buffer = (char *)malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
{
return(0);
}

read_size = fread(buffer, sizeof(char), letters, handler);
buffer[letters] = '\0';
if (letters != read_size)
{
    free(buffer);
    buffer = NULL;
}
}
return(0);
}