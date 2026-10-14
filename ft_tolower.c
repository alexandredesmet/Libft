/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:38:20 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/14 15:01:08 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%c", ft_tolower(av[1][0]));
}*/