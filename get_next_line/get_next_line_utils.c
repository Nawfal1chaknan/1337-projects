/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:54:52 by nchaknan          #+#    #+#             */
/*   Updated: 2022/11/17 18:41:28 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*finalstr;
	int		i;
	int		j;

	(finalstr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1));
	if ((!s1 && !s2) || !finalstr)
		return (0);
	i = 0;
	while (s1 && s1[i])
	{
		finalstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
		finalstr[i++] = s2[j++];
	finalstr[i] = '\0';
	if (finalstr[0] == '\0')
	{
		free(finalstr);
		finalstr = 0;
	}
	free(s1);
	return (finalstr);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (!(char)c)
		return (&s[i]);
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return (&s[i]);
	else
		return (0);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s && s[i] != '\0')
		i++;
	return (i);
}
