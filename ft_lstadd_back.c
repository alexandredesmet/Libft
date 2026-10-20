/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:23:56 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/20 16:41:42 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list *head;
	t_list *n1;
	t_list *n2;
	t_list *n3;

	head = NULL;
	n1 = ft_lstnew("First Node");
	ft_lstadd_front(&head, n1);
	n2 = ft_lstnew("Second Node");
	ft_lstadd_front(&head, n2);
	n3 = ft_lstnew("Third Node");
	ft_lstadd_back(&head, n3);
	while (head)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
	free(n1);
	free(n2);
	free(n3);
}*/