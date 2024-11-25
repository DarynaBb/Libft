/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbilenko <dbilenko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:47:53 by dbilenko          #+#    #+#             */
/*   Updated: 2024/11/25 11:47:56 by dbilenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
