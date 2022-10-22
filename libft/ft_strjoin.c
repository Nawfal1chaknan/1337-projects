/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:53:57 by nchaknan          #+#    #+#             */
/*   Updated: 2022/10/15 20:28:43 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *finalStr;
    size_t i = 0;
    size_t j = 0;

    if (!s1 || !s2)
        return (NULL);

    finalStr = malloc(((ft_strlen(s1)) + (ft_strlen(s2))) + 1);
    if (!finalStr)
        return (NULL);

    while (i < ft_strlen(s1))
    {
        finalStr[i] = s1[i];
        i++;
    }
    while (j < ft_strlen(s2))
    {
        finalStr[i] = s2[j];
        i++;
        j++;
    }
    finalStr[i] = '\0';
    return (finalStr);
}