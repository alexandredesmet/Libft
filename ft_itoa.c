/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:10:09 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/20 18:45:27 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_digit(int n)
{
	int	c;

	c = 0;
	if (n <= 0)
	{
		n = -n;
		c++;
	}
	while (n > 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*itoa;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_count_digit(n);
	itoa = (char *)ft_calloc(sizeof(char), size + 1);
	if (!itoa)
		return (NULL);
	if (n < 0)
	{
		itoa[0] = '-';
		n = -n;
	}
	if (n == 0)
		itoa[0] = '0';
	while (n)
	{
		itoa[--size] = (n % 10) + '0';
		n /= 10;
	}
	return (itoa);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s", ft_itoa(atoi(av[1])));
}*/
