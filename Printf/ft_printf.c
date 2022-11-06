/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:58:24 by nchaknan          #+#    #+#             */
/*   Updated: 2022/11/03 19:23:06 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check(va_list arg, char c)
{
	if (c == '%')
		return (ft_putchar_pf('%'));
	if (c == 'c')
		return (ft_putchar_pf(va_arg(arg, int)));
	if (c == 's')
		return (ft_putstr_pf(va_arg(arg, char *)));
	if (c == 'p')
	{
		ft_putstr_pf("0x");
		return (ft_pointer_pf(va_arg(arg, unsigned long), "0123456789abcdef")
			+ 2);
	}
	if (c == 'd')
		return (ft_putnbr_pf(va_arg(arg, int)));
	if (c == 'i')
		return (ft_putnbr_pf(va_arg(arg, int)));
	if (c == 'u')
		return (ft_u_putnbr_pf(va_arg(arg, unsigned int)));
	if (c == 'x')
		return (ft_hex_pf(va_arg(arg, unsigned int), "0123456789abcdef"));
	if (c == 'X')
		return (ft_hex_pf(va_arg(arg, unsigned int), "0123456789ABCDEF"));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	arg;

	va_start(arg, s);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count += check(arg, s[i]);
		}
		else
			count += ft_putchar_pf(s[i]);
		i++;
	}
	va_end(arg);
	return (count);
}
