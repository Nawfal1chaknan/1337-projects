/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:09:15 by nchaknan          #+#    #+#             */
/*   Updated: 2022/10/11 17:46:35 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include"libft.h"

char *ft_strdup(const char *s1)
{
    unsigned int i;
    char *s2;

    if (!(s2 = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1)))
        return (NULL);
    i = 0;
    while(i < (ft_strlen(s1) + 1))
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}