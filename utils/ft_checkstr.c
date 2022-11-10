/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:01:46 by jo                #+#    #+#             */
/*   Updated: 2022/11/10 19:38:32 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	checkstr(va_list largs, char c)
{
	int	count;
	char	b;

	b = 'A';
	count = 0;
	if (c == 'c')
		count = ft_print_char(va_arg(largs, int));
	if (c == 's')
		count = ft_print_str(va_arg(largs, char*));
	if (c == 'd' || c == 'i')
		count = ft_putnbr_b10(va_arg(largs, int));
	if (c == 'x' || c == 'X')
		count = ft_putnbr_b16((unsigned long long)va_arg(largs, unsigned long long), b);
	if (c == 'u')
		count = ft_putnbr_ub10(va_arg(largs, unsigned int));
	//if (c == 'p')
		//count = ft_putnbr_b16((unsigned long long)va_arg(largs, unsigned long long), b);
	if (c == '%')
		count = ft_print_pourcent();
	return (count);
}
