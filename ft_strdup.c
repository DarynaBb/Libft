#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*ptr;
	char	*start;

	s_len = ft_strlen(s) + 1;
	ptr = (char *)malloc(s_len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
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
