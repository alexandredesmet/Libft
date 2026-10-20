/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:42:23 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/20 17:01:36 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*#include <stdio.h>

void	del_content(void *content)
{
	printf("Content freed : %s\n", (char *)content);
	free(content);
}
int	main(int ac, char **av)
{
	(void)ac;
	t_list *node = ft_lstnew(av[1]);
	ft_lstdelone(node, del_content);
}*/