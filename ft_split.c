#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	saw_word;
	int	num_of_words;
	int	i;

	saw_word = 0;
	num_of_words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && saw_word == 0)
		{
			saw_word = 1;
			num_of_words++;
		}
		if (s[i] == c)
			saw_word = 0;
		i++;
	}
	return (num_of_words);
}

static char	*allocate_word(const char *s, char c)
{
	int		s_len;
	int		i;
	char	*word;

	s_len = 0;
	i = 0;
	while (s[s_len] && s[s_len] != c)
		s_len++;
	word = (char *)malloc((s_len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < s_len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_result(char **result, int words_allocated)
{
	while (words_allocated >= 0)
	{
		free(result[words_allocated]);
		words_allocated--;
	}
	free(result);
}

static char	**fill_result(char **result, const char *s, char c)
{
	int	index;

	index = 0;
	while (*s)
	{
		if (*s != c)
		{
			result[index] = allocate_word(s, c);
			if (!result[index])
			{
				free_result(result, index);
				return (NULL);
			}
			index++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	result[index] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**result;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (fill_result(result, s, c));
}
// void free_split(char **arr)
// {
//     int i = 0;
//     while (arr[i])
//     {
//         free(arr[i]);
//         i++;
//     }
//     free(arr);
// }
// void print_split(char **arr)
// {
//     int i = 0;
//     while (arr[i])
//     {
//         printf("'%s'\n", arr[i]);
//         i++;
//     }
// }
// int main()
// {
//     char const s[] = "hello,world,,,,hi,,,,,,,h,,,,,,f";
//     char c = ',';
//     char **arr = ft_split(s, c);
//     if (arr)
//     {
//         print_split(arr);
//         free_split(arr);
//     }
//     else
//     {
//         printf("Error: Memory allocation failed.\n");
//     }
//     return 0;
// }