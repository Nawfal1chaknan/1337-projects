/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:13:53 by nchaknan          #+#    #+#             */
/*   Updated: 2022/10/11 16:08:04 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include"libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *p;

    p = (void *)malloc(count * size);
    if(!p)
        return(NULL);
    else    
        ft_bzero(p, (count * size));
    return(p);
}