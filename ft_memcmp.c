/* ************************************************************************** */
/*                                                                            */
/*   ft_memcmp.c                                      ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/08/16 01:55:33 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/08/16 01:55:33 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*x;
	unsigned char	*y;

	x = (unsigned char *)s1;
	y = (unsigned char *)s2;
	i = 0;
	while (i < n && x[i] == y[i])
	{
		i++;
	}
	if (n == i)
	{
		return 0;
	}
	return (x[i] - y[i]);
}
#include <stdio.h>
int		main(void)
{
	char	x[] = "abc";
	char	y[] = "bbc";

	printf("%d\n", ft_memcmp(x, y, 0));
}
