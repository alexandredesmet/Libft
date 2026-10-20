/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:43:23 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/20 19:32:27 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	void	*content;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		tmp = ft_lstnew(content);
		if (!tmp)
		{
			del(content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
/*
#include <stdio.h>

void	ft_delone(void *content)
{
	free(content);
}
void	ft_print(void *content)
{
	printf("%s\n", (char *)content);
}

void	*ft_spoil_content(void *content)
{
	(void)content;
	return (ft_strdup("spoiled"));
}
int	main(void)
{
	t_list	*head;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*map;

	head = NULL;
	n1 = ft_lstnew(ft_strdup("First Node"));
	ft_lstadd_front(&head, n1);
	n2 = ft_lstnew(ft_strdup("Second Node"));
	ft_lstadd_front(&head, n2);
	n3 = ft_lstnew(ft_strdup("Third Node"));
	ft_lstadd_front(&head, n3);
	map = ft_lstmap(head, ft_spoil_content, ft_delone);
	ft_lstiter(map, ft_print);
}
	*/