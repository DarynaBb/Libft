#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
// int main() {
//     char str1[] = "abcdef";
//     char str2[] = "abcdeg";

//     int result = ft_memcmp(str1, str2, 6);

//     if (result == 0) {
//         printf("The first 6 bytes are equal.\n");
//     } else if (result < 0) {
//         printf("str1 is lexicographically smaller than str2.\n");
//     } else {
//         printf("str1 is lexicographically greater than str2.\n");
//     }

//     return 0;
// }
