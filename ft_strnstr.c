/* ************************************************************************** */
/*                                                                            */
/*   ft_strnstr.c                                     ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/08/17 21:49:49 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/08/17 21:49:49 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (little[j] && big[i + j] == little[j])
		{
			if (big[i + j] == '\0')
			{
				return (NULL);
			}
			j++;
		}
		if (!little[j])
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int		main()
{
	char	big[] = "Hi my name is Sohaib Ashraf Abu Msameh";
	char	little[] = "Sohaib";
	char	*r;

	r = ft_strnstr(big, little, 15);
	if (r == NULL)
	{
		return 0;
	}
	printf("%s\n", r);
}*/
