int	ft_isalnum(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57));
}

/*#include <stdio.h>
int main() {
    char s1 = ' ';
    
    printf("%d\n", ft_isalnum(s1));

    return 0;
}*/
