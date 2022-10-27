/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:20:09 by nchaknan          #+#    #+#             */
/*   Updated: 2022/10/25 12:24:17 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*finals;

	if (!s || !f)
		return (NULL);
	finals = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!finals)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		finals[i] = f(i, s[i]);
		i++;
	}
	finals[i] = '\0';
	return (finals);
}
