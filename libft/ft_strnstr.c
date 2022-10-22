/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:53:59 by nchaknan          #+#    #+#             */
/*   Updated: 2022/10/12 17:10:20 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    char *big;
    char *small;
    size_t i;
    size_t j;

    big = (char *)haystack;
    small = (char *)needle;
    i = 0;
    j = 0;

    if(!big && len == 0)
        return (NULL);

    if(small[j] == '\0')
        return(big); 

    while (big[i] != '\0')
    {
        j = 0;
        while (big[i + j] == small[j] &&  i + j < len)
        {
            j++;
            if(small[j] == '\0')
                 return (&big[i]);
        }
        i++;
    }
    return (NULL);
}