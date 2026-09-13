/* ************************************************************************** */
/*                                                                            */
/*   ft_lstsize.c                                     ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/09/10 17:19:24 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/09/10 17:19:24 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*int		main(void)
{
	int		nb1 = 5;
	int		nb2 = 10;
	t_list	*list1;
	t_list	*list2;

	list1 = ft_lstnew(&nb1);
	list2 = ft_lstnew(&nb2);
	ft_lstadd_front(&list1, list2);
	printf("%d\n", ft_lstsize(list1));
}*/
