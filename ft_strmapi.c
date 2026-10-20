/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:51:44 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/20 19:06:48 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*mapi;

	if (!s || !f)
		return (NULL);
	mapi = (char *)ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!mapi)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mapi[i] = f(i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}
/*
#include <stdio.h>

char	ft_tmap(unsigned int a, char c)
{
	(void)a;
	return (c + 32);
}
int	main(int ac, char **av)
{
	char	*mapi;

	(void)ac;
	mapi = ft_strmapi(av[1], ft_tmap);
	printf("%s", mapi);
	free(mapi);
}
*/