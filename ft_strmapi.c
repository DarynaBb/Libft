#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	char	*changed_str;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	changed_str = (char *)malloc((s_len + 1) * sizeof(char));
	if (!changed_str)
		return (NULL);
	while (s[i])
	{
		changed_str[i] = f(i, s[i]);
		i++;
	}
	changed_str[i] = '\0';
	return (changed_str);
}
// char toggle_case(unsigned int i, char c) {
//     if (i % 2 == 0)
//         return (c >= 'a' && c <= 'z') ? c - 32 : c;
//     else
//         return (c >= 'A' && c <= 'Z') ? c + 32 : c;
// }
// int main() {
//     char s[] = "hello";
//     char *result = ft_strmapi(s, toggle_case);
//     if (result)
//     {
//         printf("%s", result);
//         free(result);
//     }
//     return 0;
// }
