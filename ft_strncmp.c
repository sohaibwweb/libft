/* ************************************************************************** */
/*                                                                            */
/*   ft_strncmp.c                                     ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/08/14 14:18:48 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/08/14 14:18:48 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (n == 0)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
int	main()
{
	char 	s1[] = "mwx";
	char	s2[] = "bca";

	printf("%d\n", ft_strncmp(s1, s2, 3));
}*/
