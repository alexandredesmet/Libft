/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:22:44 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/20 13:02:57 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	count;
	int	f;

	count = 0;
	f = 0;
	while (*s)
	{
		if (*s == c)
			f = 0;
		else if (!f)
		{
			count++;
			f = 1;
		}
		s++;
	}
	return (count);
}
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((!s[i] || s[i] == c) && index >= 0)
		{
			split[j++] = ft_substr(s, index, i - index);
			index = -1;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}
/*#include <stdio.h>

int	main(int ac, char **av)
{
	int i;
	char **r;
	if (ac != 3)
		return (1);
	r = ft_split(av[1], av[2][0]);
	i = 0;
	while (r[i])
	{
		printf("%s\n", r[i]);
		i++;
	}
}*/