/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:31:21 by nchaknan          #+#    #+#             */
/*   Updated: 2022/10/25 12:24:03 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	x;

	if (!dstsize)
		return (ft_strlen(src));
	i = 0;
	j = ft_strlen(dst);
	x = ft_strlen(dst) + ft_strlen(src);
	if (dstsize <= j || !dst)
		return (ft_strlen(src) + dstsize);
	while (src[i] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (x);
}
