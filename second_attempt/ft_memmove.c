/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbilenko <dbilenko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:45:58 by dbilenko          #+#    #+#             */
/*   Updated: 2024/11/25 11:46:01 by dbilenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (destination < source || destination > source + n)
	{
		i = 0;
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			destination[n] = source[n];
		}
	}
	return (dest);
}
