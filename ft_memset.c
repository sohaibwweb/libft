/* ************************************************************************** */
/*                                                                            */
/*   FILE_NAME.c                                      ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/07/25 18:04:14 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/07/25 18:04:14 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while (i < n)
		str[i++] = (unsigned char)c;
	return (str);
}
int	main()
{
	char s[] = "shohaib";
	char *result;
	s[3] = '\0';

	result = ft_memset(s, 65, 2);
}
