/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbilenko <dbilenko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:48:23 by dbilenko          #+#    #+#             */
/*   Updated: 2024/11/25 11:48:25 by dbilenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void to_upper(unsigned int index, char *ch)
// {
//     if (*ch >= 'a' && *ch <= 'z')
//         *ch -= 32; 
// }
// int main() {
//     char s[] = "hello";
//     ft_striteri(s, to_upper);
//     return 0;
// }
