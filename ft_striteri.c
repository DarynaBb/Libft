void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void to_upper(unsigned int index, char *ch)
// {
//     if (*ch >= 'a' && *ch <= 'z')
//         *ch -= 32; 
// }
// int main() {
//     char s[] = "hello";
//     ft_striteri(s, to_upper);
//     return 0;
// }
