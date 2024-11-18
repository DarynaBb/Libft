#include "libft.h"

static int	n_is_negative(int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	str[11];
	int		i;

	i = 0;
	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	n = n_is_negative(n, fd);
	while (n)
	{
		str[i++] = (n % 10) + '0';
		n = n / 10;
	}
	while (--i >= 0)
		write(fd, &str[i], 1);
}
// int main() {
//     int s = 890890897;
//     ft_putnbr_fd(s, 1);    
//     return 0;
// }
