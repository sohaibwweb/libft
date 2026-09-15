/* ************************************************************************** */
/*                                                                            */
/*   ft_lstmap.c                                      ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/09/14 10:32:33 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/09/14 10:32:33 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
        t_list	*new_list;
        void	*new_content;
        t_list	*new_node;

		new_list = NULL;
		while (lst != NULL)
		{
			new_content = f(lst->content);
			new_node = ft_lstnew(new_content);
			if (!new_node)
			{
				ft_lstclear(&new_list , del);
				return (NULL);
			}
			ft_lstadd_back(&new_list, new_node);
			lst = lst->next;
		}
		return (new_list);
}
void	del(void *content)
{
	free(content);
}
void	*f(void *content)
{

	int	*edit_content;

	edit_content = malloc(sizeof(int));
	if (!edit_content)
		return (NULL);
	*edit_content = (*(int *)content) * 2;
	return (edit_content);
}
int	main()
{
	int nb1 = 5;
	int nb2 = 10;
	int nb3 = 15;
	t_list  *list = NULL;
	t_list	*new_map = NULL;

	ft_lstadd_back(&list, ft_lstnew(&nb1));
	ft_lstadd_back(&list, ft_lstnew(&nb2));
	ft_lstadd_back(&list, ft_lstnew(&nb3));
	 
	new_map = ft_lstmap(list, f, del);

	printf("%d\n", *(int *)new_map->content);
	printf("%d\n", *(int *)new_map->next->content);
	printf("%d\n", *(int *)new_map->next->next->content);
	
	ft_lstclear(&new_map, del);

	t_list	*p;

	while (list)
	{
		p = list->next;
		free(list);
		list = p;
	}
	return (0);
}
