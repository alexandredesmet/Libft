/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:45:50 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/20 19:04:38 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("ft_memchr:%s\n   memchr:%s", (char *)ft_memchr(av[1], av[2][0],
			atoi(av[3])), (char *)memchr(av[1], av[2][0], atoi(av[3])));
}
*/