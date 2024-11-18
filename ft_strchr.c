#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    unsigned char uch;

    uch = (unsigned char)c;
    if (uch == '\0')
    {
        return (char *)(str + ft_strlen(str));
    }
    while (*str)
    {
        if (*str == uch)
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