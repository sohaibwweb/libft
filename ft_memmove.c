/* ************************************************************************** */
/*                                                                            */
/*   FILE_NAME.c                                      ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/07/31 04:33:56 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/07/31 04:33:56 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*a;
	unsigned char		*b;

	i = 0;
	a = src;
	b = dest;
	if (b > a)
	{
		while (i < n)
		{
			b[n - 1 - i] = a[n - 1 - i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			b[i] = a[i];
			i++;
		}
	}
	return (b);
}
/*#include <stdio.h>
int		main(void)
{
	char	a[] = "sohaib";

	ft_memmove(a + 2, a, 4);
	printf("%s", a);
}*/
