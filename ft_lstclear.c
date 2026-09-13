/* ************************************************************************** */
/*                                                                            */
/*   ft_lstclear.c                                    ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/09/13 13:16:40 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/09/13 13:16:40 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*far;

	while (*lst != NULL)
	{
		far = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = far;
	}
}
