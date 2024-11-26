/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbilenko <dbilenko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:50:10 by dbilenko          #+#    #+#             */
/*   Updated: 2024/11/25 11:50:11 by dbilenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}
/*#include <stdio.h>
int main() {
    char s1[] = "nsdggf ";
    
    printf("%d\n", ft_strlen(s1));

    return 0;
}*/
