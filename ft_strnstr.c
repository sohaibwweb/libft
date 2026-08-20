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
	unsigned char	*a;
	unsigned char   *b;

	a = (unsigned char *)little;
	b = (unsigned char *)big;
	i = 0;
	while (i < len)
	{
		j = 0;
		while (a[j] && b[i + j] == a[j])
		{
			if (b[i + j] == '\0')
			{
				return (NULL);
			}
			j++;
		}
		if (!a[j])
		{
			return ((char *)&b[i]);
		}
		i++;
	}
	return (NULL);
}
#include <stdio.h>
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
}

