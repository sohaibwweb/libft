/* ************************************************************************** */
/*                                                                            */
/*   FILE_NAME.c                                      ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/08/02 01:28:06 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/08/02 01:28:06 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t				i;
	size_t				n;
	size_t				j;
	unsigned char const *a;
	unsigned char 		*b;

	i = 0;
	n = 0;
	j = 0;
	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	while(b[n] != '\0')
	{
		n++;
	}
	while(a[j])
	{
		j++;
	}
	if (dsize == 0)
	{
		return (n + j);
	}
	while(a[i] && n + i + 1 < dsize)
	{
		b[n + i] = a[i];
		i++;
	}
	b[n + i] = '\0';
	return (j + n);
}
#include <stdio.h>

int main(void)
{
	char dst[20] = "Hello";
	size_t r;

	r = ft_strlcat(dst, " World", 20);
	printf("dst = %s\n", dst);
	printf("result = %zu\n", r);
}
