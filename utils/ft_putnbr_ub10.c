/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ub10.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:47:34 by jo                #+#    #+#             */
/*   Updated: 2022/11/10 18:32:58 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_ub10(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb >= 10)
	{
		count += ft_putnbr_ub10(nb / 10);
		count += ft_putnbr_ub10(nb % 10);
	}
	else
	{
		ft_putchar_fd(nb + 48, 1);
		count = count + 1;
	}
	return (count);
}
