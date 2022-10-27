/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:53:57 by nchaknan          #+#    #+#             */
/*   Updated: 2022/10/25 12:24:00 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*finalstr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	finalstr = malloc(((ft_strlen(s1)) + (ft_strlen(s2))) + 1);
	if (!finalstr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		finalstr[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		finalstr[i] = s2[j];
		i++;
		j++;
	}
	finalstr[i] = '\0';
	return (finalstr);
}
