/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbilenko <dbilenko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:52:09 by dbilenko          #+#    #+#             */
/*   Updated: 2024/11/25 11:52:11 by dbilenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
		ch = ch - 32;
	return (ch);
}
// #include <stdio.h>
// int main() {
//     char c = 'a';
//     printf("%d", ft_toupper(c));
//     return 0;
// }
