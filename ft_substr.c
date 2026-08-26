/* ************************************************************************** */
/*                                                                            */
/*   ft_substr.c                                      ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/08/21 13:46:47 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/08/21 13:46:47 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			len_s;
	char			*result;

	result = malloc (sizeof(char) * len + 1);
	if (!result)
	{
		return (NULL);
	}
	len_s = ft_strlen(s);
	if (start > len_s)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		result[i] = s[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}
/*int		main(void)
{
	char	s[] = "Sohaib Ashraf Abu Msameh";
	size_t	len = 1;
	size_t	start = 24;
	char	*result;

	result = ft_substr(s, start, len);
	printf("%s", result);
}*/
