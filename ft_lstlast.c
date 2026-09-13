/* ************************************************************************** */
/*                                                                            */
/*   ft_lstlast.c                                     ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/09/11 17:02:00 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/09/11 17:02:00 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*int     main(void)
{
	int     nb1 = 5;
	int     nb2 = 10;
	t_list  *list1;
	t_list  *list2;
	t_list	*result;

	list1 = ft_lstnew(&nb1);
	list2 = ft_lstnew(&nb2);
	ft_lstadd_front(&list1, list2);
	result = ft_lstlast(list1);
	printf("%d\n", *(int *)result->content);
}*/
