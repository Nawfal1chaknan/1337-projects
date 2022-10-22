/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:51:37 by nchaknan          #+#    #+#             */
/*   Updated: 2022/10/18 18:50:06 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t j;
    char *finalS;

    if(!s1 || !set)
        return NULL;

    i = 0;
    j = ft_strlen(s1);
    while(ft_strchr(set, s1[i]) && s1[i] != '\0')
        i++;
    while(ft_strchr(set, s1[j]) && j > i)
        j--;
    finalS = ft_substr(s1, i, j - i + 1);

    if (!finalS)
        return NULL;

    return finalS;
}
