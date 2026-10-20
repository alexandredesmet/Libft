/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:33:36 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/20 12:25:35 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n--)
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[10] = "abcdefgh";
	char str2[10] = "0000efgh";
	ft_memcpy(str2, str1, 4);
	printf("%s", str2);
}*/