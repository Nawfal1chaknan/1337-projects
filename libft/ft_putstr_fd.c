/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:24:31 by nchaknan          #+#    #+#             */
/*   Updated: 2022/10/14 19:06:53 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include"libft.h"

void ft_putstr_fd(char *s, int fd)
{
    if(!s)
        return;

    write(fd, s, ft_strlen(s));
}