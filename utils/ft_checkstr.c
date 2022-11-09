/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jo <jo@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:01:46 by jo                #+#    #+#             */
/*   Updated: 2022/11/09 15:47:13 by jo               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	checkstr(va_list largs, char c)
{
	int	count;

	count = 0;
	if (c == 'c')//✅
		count = ft_print_char(va_arg(largs, int));
	if (c == 's')//✅
		count = ft_print_str(va_arg(largs, char*));
	if (c == 'd' || c == 'i')
		//count = ft_printint(va_arg(largs, int));
	if (c == 'x' || c == 'X')
		count = ft_print_hex((va_arg(largs, unsigned long long)));
	if (c == 'u')
		count = ft_print_uint(va_arg(largs, unsigned int));
	if (c == 'p')
		//count = ft_print_hex((va_arg(largs, unsigned long long)));
	if (c == '%')//✅
		count = ft_print_pourcent();
	return (count);
}
