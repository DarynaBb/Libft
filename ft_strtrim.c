#include "libft.h"

static int ft_is_garbage(const char c, char const *set)
{
    while (*set)
    {
        if (*set == c)
        {
            return (1);
        }
        set++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *trimmed_str;
    size_t s1_len = ft_strlen(s1);
    size_t start = 0;
    size_t end = s1_len - 1;

    if (!s1 || !set)
        return (NULL);
    
    while (s1[start] && ft_is_garbage(s1[start], set))
        start++;
    
    while (end > start && ft_is_garbage(s1[end], set))
            end --;
    if (start > end)
    {
        trimmed_str = (char *)malloc(sizeof(char));
        trimmed_str[0] = '\0';
        return (trimmed_str);
    }
    trimmed_str = (char *)malloc((end - start + 2) * sizeof(char));
    ft_strlcpy(trimmed_str, &s1[start], (end - start + 2));
    return (trimmed_str);
}

// int main(void)
// {
//     char *s1 = "   !!!Hello, World!!!   ";
//     char *set = " !";
//     char *result = ft_strtrim(s1, set);
    
//     printf("Trimmed string: '%s'\n", result); 
//     free(result);

//     s1 = "   !!!!   ";
//     result = ft_strtrim(s1, set);
//     printf("Trimmed string: '%s'\n", result); 
//     free(result);

//     s1 = "abc";
//     result = ft_strtrim(s1, set);
//     printf("Trimmed string: '%s'\n", result);
//     free(result);

//     return 0;
// }