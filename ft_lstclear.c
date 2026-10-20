/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:01:56 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/20 19:04:53 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/*
#include <stdio.h>

void	ft_delone(void *content)
{
	free(content);
}
int	main(void)
{
	t_list	*head;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	head = NULL;
	n1 = ft_lstnew(ft_strdup("First Node"));
	ft_lstadd_front(&head, n1);
	n2 = ft_lstnew(ft_strdup("Second Node"));
	ft_lstadd_front(&head, n2);
	n3 = ft_lstnew(ft_strdup("Third Node"));
	ft_lstadd_front(&head, n3);
	ft_lstclear(&head, ft_delone);
}
*/