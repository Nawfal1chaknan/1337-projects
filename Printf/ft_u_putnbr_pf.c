/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_putnbr_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:58:30 by nchaknan          #+#    #+#             */
/*   Updated: 2022/11/03 16:30:49 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_u_putnbr_pf(unsigned int nb)
{
	unsigned int	count;

	count = 0;
	if (nb > 9)
	{
		count += ft_u_putnbr_pf(nb / 10);
		count += ft_u_putnbr_pf(nb % 10);
	}
	else
	{
		count += ft_putchar_pf(nb + 48);
	}
	return (count);
}
