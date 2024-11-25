/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbilenko <dbilenko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:50:39 by dbilenko          #+#    #+#             */
/*   Updated: 2024/11/25 11:50:41 by dbilenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (n > i)
		{
			if (s1[i] != s2[i])
				return ((unsigned char) s1[i] - (unsigned char) s2[i]);
			if (s1[i] == '\0' && s2[i] == '\0')
				return (0);
			i++;
		}
	}
	return (0);
}
// int main() {
//     const char str1[] = "OKi";
//     const char str2[] = "OKk";
//     size_t n = 4;
//     printf("%d", ft_strncmp(str1, str2, n));
//     return 0;
// }
