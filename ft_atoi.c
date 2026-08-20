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

int	ft_atoi(const char *nptr)
{
	size_t			i;
	int				x;
	long			r;
	unsigned char	*str;

	str = (unsigned char *)nptr;
	i = 0;
	x = 1;
	r = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			x *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9') // 21
	{
		if (r > 214748364 || (r == 214748364 && (str[i] - '0') > 7))
		{
			return 0;
		}
		else
			r = r * 10 +(str[i] - '0');
		i++;
	}
	/* (long r) >> if (r * x > 2147483647)
        return (0);
    if (r * x < -2147483648)
        return (0);*/
	return (r * x);
}
