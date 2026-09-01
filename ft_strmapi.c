/* ************************************************************************** */
/*                                                                            */
/*   ft_strmapi.c                                     ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/08/31 17:56:15 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/08/31 17:56:15 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*result;

	len = ft_strlen(s);
	result = malloc(len + 1);
	if (!result)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}

char	ft_upper(unsigned int i, char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		if (i == 0)
		{
			return (c);
		}
		return (c + 32);
	}
	return (c);
}

int	main(void)
{
	char	s[] = "SOHAIB";
	char	*result;

	result = ft_strmapi(s, ft_upper);
	printf("%s", result);
}
