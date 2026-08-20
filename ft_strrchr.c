/* ************************************************************************** */
/*                                                                            */
/*   ft_strrchr.c                                     ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/08/14 05:59:19 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/08/14 05:59:19 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*l;

	l = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			l = (char *)&s[i];
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (l);
}
/*#include <stdio.h>
int		main(void)
{
	char	str[] = "sohhhhaib";
	char	*r;

	r = ft_strrchr(str , 'h');
	printf("%s\n", r);
}*/
