/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_b10.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:47:20 by jo                #+#    #+#             */
/*   Updated: 2022/11/11 19:31:01 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_b10(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (count = 11);
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nb *= -1;
		count = count + 1;
	}
	if (nb >= 10)
	{
		count += ft_putnbr_b10(nb / 10);
		count += ft_putnbr_b10(nb % 10);
	}
	else
	{
		ft_putchar_fd(nb + 48, 1);
		count = count + 1;
	}
	return (count);
}
