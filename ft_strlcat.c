/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:57:03 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/14 14:21:34 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (slen + size);
	while (src[i] && dlen + i < size - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}

/*#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlen(const char *str);

int	main(void)
{
	char tab1[15] = "Bonjour";
	char tab2[12] = "CommentCaVa";
	char tab3[15] = "Bonjour";
	char tab4[12] = "commentCaVa";
	unsigned int size = 15;
	printf("ft_strlcat : %ld %s\n   strlcat : %ld %s", ft_strlcat(tab1, tab2,
			size), tab1, strlcat(tab3, tab4, size), tab3);
}*/