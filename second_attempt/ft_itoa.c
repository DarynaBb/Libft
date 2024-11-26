/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbilenko <dbilenko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:44:43 by dbilenko          #+#    #+#             */
/*   Updated: 2024/11/25 11:44:48 by dbilenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_count(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static int	n_is_negative(int n, char *str, int *str_size)
{
	if (n < 0)
	{
		str[0] = '-';
		if (n == INT_MIN)
		{
			str[--(*str_size)] = '8';
			n = n / 10;
		}
		n = -n;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		str_size;

	str_size = char_count(n);
	str = (char *)malloc((str_size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[str_size] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		n = n_is_negative(n, str, &str_size);
	}
	while (n > 0)
	{
		str[--str_size] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
// int main() {
//     int n = -50;
//     char *result = ft_itoa(n);
//     if (result)
//     {
//         printf("Result: %s", result);
//         free(result); 
//     } 
//     return 0;
// }
