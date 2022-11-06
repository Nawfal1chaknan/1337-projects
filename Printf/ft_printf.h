/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:54:28 by nchaknan          #+#    #+#             */
/*   Updated: 2022/11/03 19:23:28 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putchar_pf(char c);
int	ft_putnbr_pf(int nb);
int	ft_putstr_pf(char *s);
int	ft_hex_pf(unsigned int n, char *base);
int	ft_u_putnbr_pf(unsigned int nb);
int	ft_pointer_pf(unsigned long n, char *base);

#endif