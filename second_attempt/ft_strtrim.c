/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbilenko <dbilenko@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:51:24 by dbilenko          #+#    #+#             */
/*   Updated: 2024/11/25 11:51:26 by dbilenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_garbage(const char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 && !set)
		return (NULL);
	while (s1[start] && ft_is_garbage(s1[start], set))
		start++;
	while (end > start && ft_is_garbage(s1[end - 1], set))
		end --;
	if (start >= end)
		return (ft_strdup(""));
	trimmed_str = (char *)malloc((end - start + 1) * sizeof(char));
	if (trimmed_str == NULL)
		return (NULL);
	ft_strlcpy(trimmed_str, &s1[start], (end - start + 1));
	return (trimmed_str);
}
// int main(void)
// {
//     char *s1 = "   !!!Hello, World!!!   ";
//     char *set = " !";
//     char *result = ft_strtrim(s1, set);
//     printf("Trimmed string: '%s'\n", result); 
//     free(result);
//     s1 = "   !!!!   ";
//     result = ft_strtrim(s1, set);
//     printf("Trimmed string: '%s'\n", result); 
//     free(result);
//     s1 = "abc";
//     result = ft_strtrim(s1, set);
//     printf("Trimmed string: '%s'\n", result);
//     free(result);
//     return 0;
// }
