/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:33:56 by nchaknan          #+#    #+#             */
/*   Updated: 2022/10/14 20:04:35 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"
#include<fcntl.h>
void ft_putnbr_fd(int n, int fd)
{
    long int i;

    i = n;
    if (i < 0)
    {
        ft_putchar_fd('-', fd);
        i *= -1;
    }
    if (i > 9)
    {
        ft_putnbr_fd(i / 10, fd);
        ft_putnbr_fd(i % 10, fd);
    }
    else
        ft_putchar_fd(i + 48, fd);
}