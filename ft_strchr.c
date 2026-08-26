/* ************************************************************************** */
/*                                                                            */
/*   ft_strchr.c                                     ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/08/13 17:06:12 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/08/13 17:06:12 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
/*#include <stdio.h>
int		main(void)
{
	char	str[] = "sohaib";
	char	*result;

	result = ft_strchr(str, 'h');
	printf("Found = %c\n", *result);
	printf("Found = %s\n", result);
}*/
