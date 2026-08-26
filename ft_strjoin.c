/* ************************************************************************** */
/*                                                                            */
/*   ft_strjoin.c                                     ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/08/21 21:33:46 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/08/21 21:33:46 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	len_s1;
	size_t	len_s2;
	char	*result;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	len = len_s1 + len_s2;
	result = malloc (sizeof(char) * (len + 1));
	if (!result)
	{
		return (NULL);
	}
	result[0] = '\0';
	ft_strlcat(result, s1, len + 1);
	ft_strlcat(result, s2, len + 1);
	return (result);
}
/*int		main(void)
{
	char	s1[] = "Sohaib";
	char	s2[] = " Ashraf";
	char	*result;

	result = ft_strjoin(s1, s2);
	printf("%s\n", result);
}*/
