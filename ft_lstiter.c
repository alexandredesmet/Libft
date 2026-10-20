/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:29:09 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/20 19:04:49 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*#include <stdio.h>

void	ft_print(void *content)
{
	printf("%s\n", (char *)content);
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
	ft_lstiter(head, ft_print);
}
*/