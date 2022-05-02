#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    char    *data;
    size_t  i;

    data = malloc(sizeof(char) * (size * nmemb));
    if (!data)
        return (NULL);
    i = 0;
    while (i < nmemb * size)
    {
        data[i] = 0;
        i++;
    }
    return ((void *)data);
}