/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:59:52 by nchaknan          #+#    #+#             */
/*   Updated: 2022/11/03 19:03:30 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_pf(unsigned int n, char *base)
{
	unsigned int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_hex_pf(n / 16, base);
		count += ft_hex_pf(n % 16, base);
	}
	else
		count += ft_putchar_pf(base[n]);
	return (count);
}
