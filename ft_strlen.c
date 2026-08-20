/* ************************************************************************** */
/*                                                                            */
/*   FILE_NAME.c                                      ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/07/25 17:55:52 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/07/25 17:55:52 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int		main()
{
	char	s[] = "sohaib";
	printf("%zu",ft_strlen(s));
}*/
