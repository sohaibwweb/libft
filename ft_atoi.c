/* ************************************************************************** */
/*                                                                            */
/*   ft_atoi.c                                        ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/08/18 02:21:51 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/08/18 02:21:51 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include <stddef.h>

void	ft_skip_and_sign(const char *nptr, size_t *i, int *x)
{
	unsigned char	*str;

	str = (unsigned char *)nptr;
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
	{
		(*i)++;
	}
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
		{
			*x *= -1;
		}
		(*i)++;
	}
}

int	ft_atoi(const char *nptr)
{
	size_t			i;
	int				x;
	long			r;

	i = 0;
	x = 1;
	ft_skip_and_sign(nptr, &i, &x);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		r = r * 10 +(nptr[i] - '0');
		i++;
	}
	if (r * x > 2147483647)
		return (0);
	if (r * x < -2147483648)
		return (0);
	return (r * x);
}
