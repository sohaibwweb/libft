/* ************************************************************************** */
/*                                                                            */
/*   ft_striteri.c                                    ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/09/01 06:11:23 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/09/01 06:11:23 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	ft_edit_string(unsigned int i, char *x)
{
	if (i % 2 == 0 && i % 2 == 0)
	{
		*x = *x - 32;
	}
	else
		*x = *x;
}
/*int	main(void)
{
	char	x[] = "sohaib";

	ft_striteri(x, ft_edit_string);
	printf("%s\n", x);
}*/
