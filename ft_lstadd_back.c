/* ************************************************************************** */
/*                                                                            */
/*   ft_lstadd_back.c                                 ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/09/12 17:20:15 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/09/12 17:20:15 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if(!last)
	{
		*lst = new;
	}
	else
		last->next = new;
}
/*int       main(void)
{
	int nb1 = 5;
	int nb2 = 10;
	int	nb3 = 15;
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;

	list1 = ft_lstnew(&nb1);
	list2 = ft_lstnew(&nb2);
	list3 = ft_lstnew(&nb3);
	ft_lstadd_front(&list1, list2);
	ft_lstadd_back(&list1, list3);
	printf("%d\n", *(int *)list1->next->next->content);
}*/
