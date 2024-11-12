#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    if (needle == "")
    {
        return (char *)haystack;
    }
    
    int i = 0;
    int k = 0;
    
    while (haystack[i] != '\0' && i < len)
    {
        if (haystack[i] == needle[0])
        {
            while(needle[k] != '\0' || haystack[i] == needle[k])
        {
            if (haystack[i] == needle[k])
            {
                k++;
                i++;
            } 
        }
        }
        i++;
    }
}

int main() {
    char c[] = "hello world hi";
    char p[] = "ello";
    size_t len = 3;
    // printf("%s\n", strnstr(c, p, len));
    printf("%s", ft_strnstr(c, p, len));

    return 0;
}