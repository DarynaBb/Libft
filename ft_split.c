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

static char	**allocate_array(char const *s, char c)
{
	int		arr_size;
	char	**str_array;

	arr_size = count_words(s, c);
	if (arr_size > 0)
	{
		str_array = (char **)malloc((arr_size + 1) * sizeof(char *));
		if (str_array == NULL)
			return (NULL);
		str_array[arr_size] = NULL;
	}
	else
	{
		str_array = (char **)malloc(sizeof(char *));
		if (str_array == NULL)
			return (NULL);
		str_array[0] = NULL;
	}
	return (str_array);
}

static int	allocate_word(char **str_array, int k, int size_of_string)
{
	str_array[k] = (char *)malloc((size_of_string + 1) * sizeof(char));
	if (str_array[k] == NULL)
	{
		while (k > 0)
			free(str_array[--k]);
		free(str_array);
		return (0);
	}
	return (1);
}

static char	**allocate_strs(char const *s, char c)
{
	char	**str_array;
    int saw_word;
    int size_of_string;
    int i;
    int k;

    saw_word = 0;
    size_of_string = 0;
    i = 0;
    k = 0;
	str_array = allocate_array(s, c);
	if (str_array == NULL)
		return (NULL);
    while (s[i])
    {
        if (s[i] != c)
        {
            if (saw_word == 0)
                saw_word = 1;
            size_of_string++;    
        }
        else if (saw_word == 1)
        {
            if (!allocate_word(str_array, k, size_of_string))
                return (NULL);
            saw_word = 0;
            size_of_string = 0;
            k++;
        }
        i++;
    }
    if (saw_word == 1)
    {
        if (!allocate_word(str_array, k, size_of_string))
            return (NULL);
        k++;    
    }
    str_array[k] = NULL;
    return (str_array);
}

char **ft_split(char const *s, char c)
{
    if (!s)
        return (NULL);
    char **arr = allocate_strs(s, c);
    if (!arr)
        return (NULL);
    int saw_word = 0;
    int i = 0;
    int k = 0;
    int j = 0;
    
    while (s[i])
    {
        if (s[i] != c)
        {
            if (saw_word == 0)
            {
                saw_word = 1;
                j = 0;
            }
            arr[k][j] = s[i];
            j++;
        }
        else if (saw_word == 1)
        {
            arr[k][j] = '\0';
            saw_word = 0;
            k++;
        }
        i++;
    }
    if (saw_word == 1)
    {
        arr[k][j] = '\0';
        k++;
    }
    return (arr);
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
    
    
    
    
    
    
    
    
    
    
