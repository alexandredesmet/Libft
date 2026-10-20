/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:06:04 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/20 11:35:46 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	join = (char *)ft_calloc(sizeof(char), (size + 1));
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, ft_strlen(s1));
	ft_memcpy(join + ft_strlen(s1), s2, ft_strlen(s2));
	return (join);
}
/*#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	char *join;
	join = ft_strjoin(av[1], av[2]);
	printf("%s\n", join);
	free(join);
}*/