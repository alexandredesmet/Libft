/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:54:07 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/21 11:13:53 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			last = s;
		s++;
	}
	if (*s == (unsigned char)c)
		last = s;
	return ((char *)last);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	printf("%s", ft_strrchr("teste", '\0'));
	printf("%s", strrchr("teste", '\0'));
}*/