/* ************************************************************************** */
/*                                                                            */
/*   ft_strdup.c                                      ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/08/20 02:43:40 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/08/20 02:43:40 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	unsigned char	*a;
	size_t			len;
	char			*result;

	a = (unsigned char *)s;
	len = ft_strlen(s);
	result = malloc ((sizeof(char) * len + 1));
	if (!result)
	{
		return (NULL);
	}
	ft_memcpy(result, a, len + 1);
	return (result);
}
/*int		main(void)
{
	char	arr[] = "Sohaib Ashraf";
	char	*result;
	
	result = ft_strdup(arr);
	result[0] = 'X';
	printf("%s\n", arr);
	printf("%s\n", result);
}*/
