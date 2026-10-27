/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:18:36 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/20 19:06:46 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (size == 0)
		return (j);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	size_t	r;
	char	str1[8] = "Bonjour";
	char	str2[5] = "test";
	char	str3[8] = "Bonjour";
	char	str4[5] = "test";

	r = ft_strlcpy(str1, str2, 2);
	printf("%s | %ld\n", str1, r);
	r = strlcpy(str3, str4, 2);
	printf("%s | %ld", str3, r);
}
*/