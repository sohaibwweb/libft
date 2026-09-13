/* ************************************************************************** */
/*                                                                            */
/*   ft_lstdelone.c                                   ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/09/12 19:55:01 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/09/12 19:55:01 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "libft.h"
#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
        if (!lst)
                return ;
        del(lst->content);
        free(lst);
}
/*void  del(void *content)
{
        free(content);
}
int     main()
{
        int *nb;
        t_list *lst;

        nb = malloc(sizeof(int));
        *nb = 5;
        lst = ft_lstnew(nb);
        printf("%d\n", *(int*)lst->content);
        ft_lstdelone(lst, del);
        //printf("%d\n", *(int*)lst->content);
}*/
