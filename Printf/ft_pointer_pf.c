/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:57:27 by nchaknan          #+#    #+#             */
/*   Updated: 2022/11/03 12:07:37 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer_pf(unsigned long n, char *base)
{
	unsigned long	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_pointer_pf(n / 16, base);
		count += ft_pointer_pf(n % 16, base);
	}
	else
		count += ft_putchar_pf(base[n]);
	return (count);
}
