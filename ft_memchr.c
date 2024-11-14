#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    unsigned char ch = (unsigned char) c;
    size_t i;
    i = 0;


    while (i < n)
    {
        if (ptr[i] == ch)
        {
            return (ptr + i);
        }
        i++;
    }
    return (NULL);
}
