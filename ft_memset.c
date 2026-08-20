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
	unsigned char	*ptr;
	size_t			i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i++] = (unsigned char)c;
	}
	return (ptr);
}
/*#include <stdio.h>

int main(void)
{
    int c = 321;
    unsigned char result = (unsigned char)c;
    printf("%d\n", result);
}*/
