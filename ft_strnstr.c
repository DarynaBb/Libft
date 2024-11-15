#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    if (needle == '\0')
    {
        return ((char *)haystack);
    }
    size_t i;
    size_t j;

    i = 0;
    while (haystack[i] != '\0' && i < len)
    {
        j = 0;
        while (i + j < len && haystack[i+j] == needle[j])
        {
            j++;
            if (needle[i] == '\0')
            {
                return ((char *)&haystack[i]);
            }
        }
        i++;
    }
    return (NULL);
}


// int main() {
//     char c[] = "hello world hi";
//     char p[] = "ello";
//     size_t len = 3;
//     printf("%s\n", strnstr(c, p, len));
//     printf("%s", ft_strnstr(c, p, len));

//     return 0;
// }