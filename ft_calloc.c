#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = 0;
        i++;
    }
}

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;

    ptr = malloc(nmemb * size);
    if (ptr == NULL)
    {
        return (NULL);
    }
    if (nmemb != 0 && size != 0)
    {
        ft_bzero(ptr, nmemb * size);
    } else 
    {
        return (NULL);
    }
    return (ptr);
}

