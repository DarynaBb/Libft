#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    const char *original_str = str;

    if (c == '\0')
    {
        return (char *)(str + ft_strlen(str));
    }
    str = str + ft_strlen(str) - 1;
    while (str >= original_str)
    {
        if (*str == c)
        {
            return (char *)str;
        }
        str--;
    }
    
    return (NULL);
}

// int main() {
//     const char str[] = "Hello, worlf!";
//     char c = '\0';
//     printf("%d", ft_strrchr(str, c));

//     return 0;
// }