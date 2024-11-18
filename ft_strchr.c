#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	u_ch;

	u_ch = (unsigned char)c;
	if (u_ch == '\0')
		return ((char *)(str + ft_strlen(str)));
	while (*str)
	{
		if (*str == u_ch)
			return ((char *)(str));
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
