/* ************************************************************************** */
/*                                                                            */
/*   FILE_NAME.c                                      ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/07/31 03:55:44 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/07/31 03:55:44 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*a;
	unsigned char		*b;

	i = 0;
	a = src;
	b = dest;
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (b);
}
/*#include <stdio.h>
int		main(void)
{
	char	a[] = "sohaib";
	char	b[7];

	ft_memcpy(b, a, 6);
	printf("%s", b);
}*/
