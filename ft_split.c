/* ************************************************************************** */
/*                                                                            */
/*   ft_split.c                                       ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/08/26 03:02:12 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/08/26 03:02:12 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "libft.h"

/*int	ft_count_word(char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;
	size_t	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while(s[i])
	{
		if (!in_word && s[i] != c) // !0 = 1 يس ةغل يف تباث داه 
		{
			count++;
			in_word = 1;
		}
		else
		{
			if (s[i] == c)
			{
				in_word = 0;
			}
		}
		i++
	}
	return (count);
}*/
int	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	count;

	i = 0;
	count = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		j = i;
		while (s[i] && s[i] != c)
		{
			i++;
		}
		if (i != j)
		{
			count++;
		}
		while (s[i] == c)
		{
			i++;
		}
	}
	return (count);
}

char	**ft_malloc(size_t word)
{
	char	**result;

	result = (char **)malloc(sizeof(char *) * (word + 1));
	if (!result)
	{
		return (NULL);
	}
	return (result);
}

void	ft_fill_split(char const *s, char c, char **result)
{
	size_t	i;
	size_t	j;
	size_t	idx_word;

	i = 0;
	idx_word = 0;
	while (s[i])
	{
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i != j)
		{
			result[idx_word] = ft_substr(s, j, i - j);
			idx_word++;
		}
		while (s[i] == c)
			i++;
	}
	result[idx_word] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	result = ft_malloc(ft_count_word(s, c));
	if (!result)
		return (NULL);
	ft_fill_split(s, c, result);
	return (result);
}
/*
int	main(void)
{
	size_t	i;
	char	**result;

	i = 0;
	result = ft_split("abAcdAsohaibAAasharf", 'A');
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
}*/
