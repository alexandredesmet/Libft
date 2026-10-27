/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:22:44 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/27 13:52:46 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
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

static void	ft_free_split(char **split, size_t j)
{
	while (j > 0)
	{
		j--;
		free(split[j]);
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	const char	*tmp;
	char		**split;

	if (!s)
		return (NULL);
	split = (char **)ft_calloc((ft_count_words(s, c) + 1), sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		tmp = s;
		while (*s && *s != c)
			s++;
		if (tmp == s)
			break ;
		split[i] = ft_substr(tmp, 0, s - tmp);
		if (!split[i++])
			return (ft_free_split(split, i), NULL);
	}
	return (split);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int		i;
	char	**r;

	if (ac != 3)
		return (1);
	r = ft_split(av[1], av[2][0]);
	i = 0;
	while (r[i])
	{
		printf("%s\n", r[i]);
		i++;
	}
}
*/
