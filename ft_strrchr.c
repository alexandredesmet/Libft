/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:54:07 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/14 14:59:50 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len--)
	{
		if (s[len] == c)
			return ((char *)s + len);
	}
	return (0);
}
/*#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s", ft_strrchr(av[2], av[1][0]));
}*/