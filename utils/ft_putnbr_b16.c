/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_b16.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:57:01 by jo                #+#    #+#             */
/*   Updated: 2022/11/10 22:17:45 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_b16(unsigned long long nb, char format)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += ft_putnbr_b16(nb / 16, format);
		count += ft_putnbr_b16(nb % 16, format);
	}
	if (nb >= 10 && nb <= 15)
	{
		ft_putchar_fd((nb - 10) + format, 1);
		count = count + 1;
	}
	if (nb <= 9)
	{
		ft_putchar_fd(nb, 1);
		count = count + 1;
	}
	return (count);
}


char	*itoa(int nb, char *base)
{
	int base_len 
}