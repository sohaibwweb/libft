/* ************************************************************************** */
/*                                                                            */
/*   ft_memchr.c                                      ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/08/16 00:43:58 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/08/16 00:43:58 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	b;

	a = (unsigned char *)s;
	b = c;
	i = 0;
	while (i < n)
	{
		if (a[i] == b)
		{
			return (&a[i]);
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int		main(void)
{
	char	arr[5] = { 10, 6, '\0',0 ,20};
	char	*result;

	result = ft_memchr(arr, 1, 0);
	if (result == NULL)
	{
		return 0;
	}
	printf("%d\n", *result);
}*/
