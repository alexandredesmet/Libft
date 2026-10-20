/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:10:49 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/20 16:21:21 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*#include <stdio.h>

int	main(void)
{
	t_list *head;
	t_list *n1;
	t_list *n2;
	t_list *n3;
	t_list *last;
	head = NULL;
	n1 = ft_lstnew("First Node");
	ft_lstadd_front(&head, n1);
	n2 = ft_lstnew("Second Node");
	ft_lstadd_front(&head, n2);
	n3 = ft_lstnew("Third Node");
	ft_lstadd_front(&head, n3);
	last = ft_lstlast(head);
	printf("%s", (char *)last->content);
	free(n1);
	free(n2);
	free(n3);
}*/