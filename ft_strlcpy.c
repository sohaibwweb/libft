/* ************************************************************************** */
/*                                                                            */
/*   FILE_NAME.c                                      ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/08/01 03:38:31 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/08/01 03:38:31 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t		i;

	i = 0;
	while (src[i])
	{
		if (dsize > 0 && i + 1 < dsize)
		{
			dst[i] = src[i];
		}
		i++;
	}
	if (dsize > 0)
	{
		if (i >= dsize)
		{
			dst[dsize - 1] = '\0';
		}
		else
		{
			dst[i] = '\0';
		}
	}
	return (i);
}
/*#include <stdio.h>

int		main(void)
{
	char	x[] = "sohaib";
	char	y[7];
	size_t	result;

	result = ft_strlcpy(y , x, 7);
	printf("result = %zu\n", result);
	printf("y = %s", y);
}*/
