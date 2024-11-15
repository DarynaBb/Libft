#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    if (c == '\0')
    {
        return (char *)(str + ft_strlen(str));
    }
    while (*str)
    {
        if (*str == c)
        {
            return (char *)(str);
        } 
        str++;
    }
    return (NULL);
}

// int main() {
//     const char str[] = "Hello, worlf!";
//     char c = 'p';
//     printf("%d", ft_strchr(str, c));

//     return 0;
// }