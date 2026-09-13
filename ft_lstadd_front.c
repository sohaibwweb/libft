/* ************************************************************************** */
/*                                                                            */
/*   ft_lstadd_front.c                                ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/09/12 14:38:12 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/09/12 14:38:12 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*int		main(void)
{
	int	nb1 = 5;
	int	nb2 = 10;
	t_list *list1;
	t_list *list2;

	list1 = ft_lstnew(&nb1);
	list2 = ft_lstnew(&nb2);
	ft_lstadd_front(&list1, list2);
	printf("%p\n", list1->next->next);
}*/
