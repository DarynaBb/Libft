#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    char u_ch;
    int str_len;

    u_ch = (char)c;
    str_len = ft_strlen(str);
    while (str_len >= 0)
    {
        if (str[str_len] == u_ch)
            return ((char *)(str + str_len));
        str_len--;
    }
    return (NULL);
}

// int main() {
//     const char str[] = "Hello, worlf!";
//     char c = '\0';
//     printf("%d", ft_strrchr(str, c));

//     return 0;
// }