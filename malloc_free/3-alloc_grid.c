#include "main.h"
/**
 *
 *
 *
 */
int **alloc_grid(int width, int height)
{   int i;
    int **arr;
    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }
    else
    arr = (int **)malloc(width * sizeof(int));
    {
        for (i = 0; i < width; i++)
        arr[i] = (int *)malloc(height * sizeof(int));
    }

    return arr;
    free(arr[i]);
}