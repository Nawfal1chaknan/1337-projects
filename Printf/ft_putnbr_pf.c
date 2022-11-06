/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchaknan <nchaknan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:58:30 by nchaknan          #+#    #+#             */
/*   Updated: 2022/11/03 19:27:02 by nchaknan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int n)
{
	int		counter;
	long	nb;

	nb = n;
	counter = 0;
	if (nb < 0)
	{
		counter += ft_putchar_pf('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		counter += ft_putnbr_pf(nb / 10);
		counter += ft_putnbr_pf(nb % 10);
	}
	else
		counter += ft_putchar_pf(nb + 48);
	return (counter);
}
