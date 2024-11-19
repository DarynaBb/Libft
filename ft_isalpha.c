int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122));
}
/*#include <stdio.h>
int main() {
    char s1 = ' ';
    printf("%d\n", ft_isalpha(s1));

    return 0;
}*/
