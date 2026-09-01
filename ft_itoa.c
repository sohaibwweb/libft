/* ************************************************************************** */
/*                                                                            */
/*   ft_itoa.c                                        ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/08/27 15:59:00 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/08/27 15:59:00 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "libft.h"

int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa_fill(int n, int count, int sign)
{
	int		i;
	char	*result;

	result = malloc(count + 1);
	if (!result)
	{
		return (NULL);
	}
	i = count - 1;
	while (i >= 0)
	{
		result[i] = ((n % 10) + '0');
		n = n / 10;
		i--;
	}
	if (sign == -1)
	{
		result[0] = '-';
	}
	result[count] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	int		count;
	int		sign;

	sign = 1;
	count = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		sign = -1;
		n *= -1;
		count += 1;
	}
	if (n == 0)
		count = 1;
	else
		count += ft_count_digits(n);
	return (ft_itoa_fill(n, count, sign));
}
/*int main(void)
{
	int		n;
	char	*result;

	n = 0;
	result = ft_itoa(n);
	printf("%s\n", result);

	free (result);
	result = NULL;
}*/
