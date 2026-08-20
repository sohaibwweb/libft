/* ************************************************************************** */
/*                                                                            */
/*   ft_calloc.c                                      ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/08/19 23:30:15 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/08/19 23:30:15 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	ptr = malloc(n * size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, n * size);
	return (ptr);
}
/*#include <stdio.h>
int		main()
{
	size_t	n = 3;
	size_t	size = 4;
	char	*r;

	r = ft_calloc(n, size);
	size_t	i = 0;
    while (i < n)
    {
        printf("%d\n", r[i]);
        i++;
    }
}*/
