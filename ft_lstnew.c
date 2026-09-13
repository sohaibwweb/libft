/* ************************************************************************** */
/*                                                                            */
/*   ft_lstnew.c                                      ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/09/11 18:31:48 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/09/11 18:31:48 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
	{
		return (NULL);
	}
	node->content = content;
	node->next = NULL;
	return (node);
}
/*int		main(void)
{
	int		nb = 5;
	t_list	*result;

	result = ft_lstnew(&nb);
	printf("%p\n", *(int *)result->next);
}*/
