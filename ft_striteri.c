/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:15:35 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/20 14:32:22 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s && s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>

void	ft_titer(unsigned int a, char *s)
{
	(void)a;
	*s -= 32;
}
int	main(int ac, char **av)
{
	(void)ac;

	ft_striteri(av[1], ft_titer);
	printf("%s", av[1]);
}*/