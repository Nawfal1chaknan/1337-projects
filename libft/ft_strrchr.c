/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:55:04 by nchaknan          #+#    #+#             */
/*   Updated: 2022/10/09 12:06:46 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while (s[i])
        i++;
    while(i >= 0)
    {
        if(s[i] == c)
            return((char *)&s[i]);
        i--;
    }
    return(NULL);
}
