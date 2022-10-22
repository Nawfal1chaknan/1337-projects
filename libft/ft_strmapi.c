/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:20:09 by nchaknan          #+#    #+#             */
/*   Updated: 2022/10/17 19:40:13 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include"libft.h"

char* ft_strmapi(char const* s, char (*f)(unsigned int, char))
{
    size_t i;
    char *finalS;

    if(!s || !f)
        return NULL;
        
    finalS = malloc((ft_strlen(s) + 1) * sizeof(char));
    if(!finalS)
        return NULL;

    i = 0;
    while(i < ft_strlen(s))
    {
        finalS[i] = f(i, s[i]);
        i++;
    }
    finalS[i] = '\0';
    return(finalS);
}

// char f(unsigned int i, char c)
// {
//     c = c + 1;
//     return c;
// }

// int main()
// {
//     char *s = "abcdef";
//     char *finalString = ft_strmapi(s, *f);
//     printf(":%s:\n", finalString);
// }

