/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbilenko <dbilenko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:52:00 by dbilenko          #+#    #+#             */
/*   Updated: 2024/11/25 11:52:02 by dbilenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
