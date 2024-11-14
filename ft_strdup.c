#include <stdio.h>

size_t  ft_strlen(const char *str)
{
    size_t length = 0;

    while (*str)
    {
        length++;
        str++;
    }
    return (length);
}

char *ft_strdup(const char *s)
{
    size_t s_len = ft_strlen(s) + 1;

    char *ptr;
    char *start;
    
    ptr = (char *)malloc(s_len * sizeof(char));
    if (ptr == NULL)
    {
        return (NULL);
    }
    start = ptr;
    while (*s)
    {
        *ptr = *s;
        ptr++;
        s++;
    }
    *ptr = '\0';
    return (start);
}