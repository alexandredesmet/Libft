/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:59:23 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/20 16:09:49 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	size;
	t_list			*current;

	size = 0;
	current = lst;
	while (current)
	{
		size++;
		current = current->next;
	}
	return (size);
}
/*#include <stdio.h>

int	main(void)
{
	t_list *head;
	t_list *n1;
	t_list *n2;

	head = NULL;
	n1 = ft_lstnew("First Node");
	ft_lstadd_front(&head, n1);
	n2 = ft_lstnew("Second Node");
	ft_lstadd_front(&head, n2);
	printf("%d\n", ft_lstsize(head));
	while (head)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
	free(n1);
	free(n2);
}*/