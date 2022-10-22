/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:10:31 by nchaknan          #+#    #+#             */
/*   Updated: 2022/10/15 18:52:02 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>
#include<stdio.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t i;

    sub = (char *)malloc((len + 1) * sizeof(char));
    if (!sub || !s)
        return NULL;

    i = 0;
    while (i < len && start <= ft_strlen(s))
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return(sub);
}