#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
// int main() {
//     char s[] = "hello world";
//     ft_putstr_fd(s, 1);
//     return 0;
// }
