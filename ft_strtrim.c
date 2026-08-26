/* ************************************************************************** */
/*                                                                            */
/*   ft_strtrim.c                                     ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/08/24 06:13:51 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/08/24 06:13:51 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "libft.h"

char	*ft_start_count(void)
{
	char	*result;

	result = malloc(sizeof(char));
	if (!result)
	{
		return (NULL);
	}
	result[0] = '\0';
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	size_t	start;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	start = i;
	i = 0;
	end = 0;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
		{
			end = i + 1;
		}
		i++;
	}
	if (start >= count)
	{
		return (ft_start_count());
	}
	return (ft_substr(s1, start, (count - start)));
}
/*int		main()
{
	char	*result;

	result = ft_strtrim("XsohaibC", "XC");
	printf("%s\n", result);
}*/
/*30  size_t    count;

37  count = ft_strlen(s1);
38     while(count > 0 && ft_strchr(set, s1[count - 1]))
39     {
40         count--;
41     }*/
