/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbilenko <dbilenko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:42:19 by dbilenko          #+#    #+#             */
/*   Updated: 2024/11/25 11:42:21 by dbilenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*#include <stdio.h>
int main() {
    char s1 = 'é';
    
    printf("%d\n", ft_isascii(s1));

    return 0;
}*/