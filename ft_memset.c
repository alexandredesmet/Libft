/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:53:53 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/14 11:06:42 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = -1;
	while (++i < n)
		p[i] = c;
	return (s);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[10] = "abcdefgh";
	ft_memset(str, 'X', 4);
	printf("%s", str);
}