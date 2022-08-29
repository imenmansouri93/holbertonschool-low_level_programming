#include "search_algos.h"
/**
 * @brief
 * 
 */
int binarysearch(int *tab,size_t begin,size_t end,int key)
{
size_t mid;
if(begin > end )
{
return (-1);
}
mid=(end + begin) / 2;
if(tab[mid] == key)
{
return (mid);
}
else if(tab[mid] > key)
{
return binarysearch(tab, begin, mid-1, key); 
}
else if(tab[mid] < key)
{
return binarysearch(tab, mid+1, end, key);
}
return (-1);
}
int binary_search(int *array, size_t size, int value)
{
int k;
if (array == NULL && size ==  0)
{
return (-1);
}
k = binarysearch(array,0,size,value);
return (k);
}
