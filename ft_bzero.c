/* ************************************************************************** */
/*                                                                            */
/*   FILE_NAME.c                                      ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/07/29 04:49:52 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/07/29 04:49:52 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = s;
	i = 6;
	while (i < n)
	{
		ptr[i++] = 0;
	}
}
/*#include <stdio.h>

int		main(void)
{
	char	s[] = "sohaib ashraf";
	
	ft_bzero(s, 7);
	printf("%s", s);
}*/
