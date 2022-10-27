/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:47:32 by nchaknan          #+#    #+#             */
/*   Updated: 2022/10/25 12:23:41 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_counter(const char *str, char c)
{
	int	counter;
	int	breaker;

	counter = 0;
	breaker = 0;
	while (*str)
	{
		if (*str != c && breaker == 0)
		{
			counter++;
			breaker = 1;
		}
		else if (*str == c)
		{
			breaker = 0;
		}
		str++;
	}
	return (counter);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		start;
	int		i;
	int		j;

	split = malloc((words_counter(s, c) + 1) * sizeof(char *));
	if (!split || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > 0)
		{
			split[j] = ft_substr(s, start, i - start);
			j++;
		}
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	split[j] = 0;
	return (split);
}
