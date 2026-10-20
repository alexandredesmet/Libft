/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:16:15 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/20 15:53:26 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>

int	main(void)
{
	t_list *head;
	t_list *n1;
	t_list *n2;

	n1 = ft_lstnew("First Node");
	ft_lstadd_front(&head, n1);
	n2 = ft_lstnew("Second Node");
	ft_lstadd_front(&head, n2);
	while (head->next)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
	free(n1);
	free(n2);
}*/