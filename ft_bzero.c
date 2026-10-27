/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:27:27 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/27 12:07:05 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[10] = "abcdefgh";
	char	str2[10] = "abcdefgh";

	ft_bzero(str1, 4);
	bzero(str2, 4);
	printf("%s | %s", &str1[5], &str2[5]);
}
*/