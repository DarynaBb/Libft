int	ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
		ch = ch + 32;
	return (ch);
}
// #include <stdio.h>
// int main() {
//     char c = 'A';
//     printf("%d", ft_tolower(c));

//     return 0;
// }
